#include "pch.h"
#include <iostream>
#include "IncludeGuards.h"
#include <string>
#include <Windows.h>

using namespace std;

double brackri(string &s, int i, int &del)
{
	//sh -������� ����� �������������� � �������������� ��������
	bool flag = false;//��������� ������ ������ ������
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
	return atof(parse(s.substr(first + 1, second - first - 1)).c_str());//�������� ����, ��� � �������
}

double bracklf(string &s, int i, int &del)
{
	//sh - ������� ����� �������������� � �������������� ��������(�� �����������)
	bool flag = false;//��������� ������ ������ ������
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
	return atof(parse(s.substr(first + 1, second - first - 1)).c_str());//�������� ����, ��� � �������
}

string parse(string s)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double first, second;
	int i, j;
	int delta;//��� ����, ����� ������� ������ �������� ����� ����� ��������� ������
	bool forsvitch; // ����� ��������� ���� � �����; ��������� � ������� ����� ������ �����
	bool close = false; //������� ���������� �����
	while (!close)
	{
		for (int n = 0; n < s.size(); n++)//������
		{
			if (s[n] == 'S')
			{
				n += 3;//������������ ������� Sqrt
				if (s[n + 1] == '(')//������ ����� �� �����
				{
					second = brackri(s, n + 1, delta);//�������� ��������� � ���� ������ 
					i = n + delta + 1;//����� � ����� ��� replace 
				}
				else
					second = getsecnum(s, n, i);
				
				n = replace(s, n - 3, i - 1, Root(second));//������ �� ��������� ������ ���������� ��������
			}
		}

		for (int n = 0; n < s.size(); n++)//�������
		{
			if (s[n] == '^')
			{
				if (s[n - 1] == ')')//����� ����� �� �����
				{
					first = bracklf(s, n - 1, delta);
					j = n - delta - 1;
				}
				else
					first = getfirnum(s, n, j);

				n = replace(s, j + 1, n, Expon(first));//������ �� ��������� ������ ���������� ��������
			}
		}

		for (int n = 0; n < s.size(); n++)//��������� � �������
		{
			if (s[n] == '*' || s[n] == '/')
			{
				forsvitch = (s[n] == '*' ? true : false);
				if (s[n + 1] == '(')//������ ����� �� �����
				{
					second = brackri(s, n + 1, delta);//�������� ��������� � ���� ������ 
					i = n + delta + 1;//����� � ����� ��� replace 
				}
				else
					second = getsecnum(s, n, i);

				if (s[n - 1] == ')')//����� ����� �� �����
				{
					first = bracklf(s, n - 1, delta);
					j = n - delta - 1;
				}
				else
					first = getfirnum(s, n, j);
				if (forsvitch)
					n = replace(s, j + 1, i - 1, Multi(first, second));//������ �� ��������� ������ ���������� ��������
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

		for (int n = 0; n < s.size(); n++)//�������� � ���������
		{
			if (s[n] == '+' || s[n] == '-')
			{
				forsvitch = (s[n] == '+' ? true : false);
				if (s[n + 1] == '(')//������ ����� �� �����
				{
					second = brackri(s, n + 1, delta);//�������� ��������� � ���� ������ 
					i = n + delta + 1;//����� � ����� ��� replace 
				}
				else
					second = getsecnum(s, n, i);

				if (s[n - 1] == ')')//����� ����� �� �����
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
		for (int k = 0; k < s.size(); k++)//��������� ���� ���������, ����� � ������ ��������� ������ ����� ��� ���������� �������
			if (!(isdigit(s[k]) || s[k] == '.' || s[k] == '-'))
			{
				close = false;
				break;
			}
	}
	End:
	return s;
}