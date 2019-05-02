#include "pch.h"
#include <iostream>
#include "IncludeGuards.h"
#include <string>
#include <Windows.h>

using namespace std;

double brackri(string &s, int i, int &del)
{
	//sh -разница между открывающимися и закрывающимися скобками
	bool flag = false;//индикатор начала чтения скобок
	int first, second;
	for (int sh = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			sh++;
			if (!flag)
			{
				first = i;
				flag = true;
			}
		}
		else if (s[i] == ')')
		{
			sh--;
			if (sh <= 0)
			{
				second = i;
				break;
			}
		}
	}
	del = second - first + 1;
	return atof(parse(s.substr(first + 1, second - first - 1)).c_str());//подстчёт того, что в скобках
}

double bracklf(string &s, int i, int &del)
{
	//sh - разница между открывающимися и закрывающимися скобками(их количеством)
	bool flag = false;//индикатор начала чтения скобок
	int first, second;
	for (int sh = 0; i >= 0; i--)
	{
		if (s[i] == ')')
		{
			sh++;
			if (!flag)
			{
				second = i;
				flag = true;
			}
		}
		else if (s[i] == '(')
		{
			sh--;
			if (sh <= 0)
			{
				first = i;
				break;
			}
		}
	}
	del = second - first + 1;
	return atof(parse(s.substr(first + 1, second - first - 1)).c_str());//подстчёт того, что в скобках
}

string parse(string s)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double first, second;
	int i, j;
	int delta;//для того, чтобы смещать курсор текущего знака после изменения строки
	bool forsvitch; // чтобы разделять плюс и минус; умножение и деление внути одного цикла
	bool close = false; //условие завершения цикла
	while (!close)
	{
		for (int n = 0; n < s.size(); n++)//корень
		{
			if (s[n] == 'S')
			{
				n += 3;//проскакиваем надпись Sqrt
				if (s[n + 1] == '(')//правая часть от плюса
				{
					second = brackri(s, n + 1, delta);//получаем результат в виде строки 
					i = n + delta + 1;//узнаём её длину для replace 
				}
				else
					second = getsecnum(s, n, i);
				
				n = replace(s, n - 3, i - 1, Root(second));//курсор на последний символ результата операции
			}
		}

		for (int n = 0; n < s.size(); n++)//степень
		{
			if (s[n] == '^')
			{
				if (s[n - 1] == ')')//левая часть от знака
				{
					first = bracklf(s, n - 1, delta);
					j = n - delta - 1;
				}
				else
					first = getfirnum(s, n, j);

				n = replace(s, j + 1, n, Expon(first));//курсор на последний символ результата операции
			}
		}

		for (int n = 0; n < s.size(); n++)//умножение и деление
		{
			if (s[n] == '*' || s[n] == '/')
			{
				forsvitch = (s[n] == '*' ? true : false);
				if (s[n + 1] == '(')//правая часть от плюса
				{
					second = brackri(s, n + 1, delta);//получаем результат в виде строки 
					i = n + delta + 1;//узнаём её длину для replace 
				}
				else
					second = getsecnum(s, n, i);

				if (s[n - 1] == ')')//левая часть от знака
				{
					first = bracklf(s, n - 1, delta);
					j = n - delta - 1;
				}
				else
					first = getfirnum(s, n, j);
				if (forsvitch)
					n = replace(s, j + 1, i - 1, Multi(first, second));//курсор на последний символ результата операции
				else
				{
					if (second == 0)
					{
						s = "Division by zero is impossible";
						goto End;
						break;
					}
					else
					n = replace(s, j + 1, i - 1, Div(first, second));
				}

			}
		}

		for (int n = 0; n < s.size(); n++)//сложение и вычитание
		{
			if (s[n] == '+' || s[n] == '-')
			{
				forsvitch = (s[n] == '+' ? true : false);
				if (s[n + 1] == '(')//правая часть от плюса
				{
					second = brackri(s, n + 1, delta);//получаем результат в виде строки 
					i = n + delta + 1;//узнаём её длину для replace 
				}
				else
					second = getsecnum(s, n, i);

				if (s[n - 1] == ')')//левая часть от знака
				{
					first = bracklf(s, n - 1, delta);
					j = n - delta - 1;
				}
				else
					first = getfirnum(s, n, j);

				if (forsvitch)
					n = replace(s, j + 1, i - 1, Sum(first, second));
				else
					n = replace(s, j + 1, i - 1, Diff(first, second));
			}
		}
		close = true;
		for (int k = 0; k < s.size(); k++)//завершаем цикл обработки, когда в строке останутся только цифры или допустимые символы
			if (!(isdigit(s[k]) || s[k] == '.' || s[k] == '-'))
			{
				close = false;
				break;
			}
	}
	End:
	return s;
}