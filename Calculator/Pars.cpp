#include <iostream>
#include "IncludeGuards.h"
#include "pch.h"
#include <string>

using namespace std;

string brackri(string &s, int i, int &del)
{
	//sh -������� ����� �������������� � �������������� ��������
	bool flag = false;//��������� ������ ������ ������
	int first, second;
	string result;
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
	s.erase(second, 1);
	s.erase(first, 1);
	result = parse(s.substr(first, second - first - 1));//�������� ����, ��� � �������
	del -= result.size();
	return result;
}

string bracklf(string &s, int i, int &del)
{
	//sh - ������� ����� �������������� � �������������� ��������(�� �����������)
	string result;
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
	s.erase(second, 1);
	s.erase(first, 1);
	result = parse(s.substr(first, second - first - 1));//�������� ����, ��� � �������
	del -= result.size();
	return result;
}

string parse(string s)
{
	double first, second;
	string strfir, strsec; // ���� �����, ������ � ������� ������
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
					strsec = brackri(s, n + 1, delta);//�������� ��������� � ���� ������ 
					i = strsec.size() + n + 1;//����� � ����� ��� replace 
					second = atof(strsec.c_str());//������������
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
					strfir = bracklf(s, n - 1, delta);
					n -= delta; // ������ ��� ������ ���������� ��-�� ������ ������
					j = n - 1 - strfir.size();
					first = atof(strfir.c_str());
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
					strsec = brackri(s, n + 1, delta);//�������� ��������� � ���� ������ 
					i = strsec.size() + n + 1;//����� � ����� ��� replace 
					second = atof(strsec.c_str());//������������
				}
				else
					second = getsecnum(s, n, i);

				if (s[n - 1] == ')')//����� ����� �� �����
				{
					strfir = bracklf(s, n - 1, delta);
					n -= delta; // ������ ��� ������ ���������� ��-�� ������ ������
					j = n - 1 - strfir.size();
					first = atof(strfir.c_str());
				}
				else
					first = getfirnum(s, n, j);

				if (forsvitch)
					n = replace(s, j + 1, i - 1, Multi(first, second));//������ �� ��������� ������ ���������� ��������
				else
					n = replace(s, j + 1, i - 1, Div(first, second));
			}
		}

		for (int n = 0; n < s.size(); n++)//�������� � ���������
		{
			if (s[n] == '+' || s[n] == '-')
			{
				forsvitch = (s[n] == '+' ? true : false);
				if (s[n + 1] == '(')//������ ����� �� �����
				{
					strsec = brackri(s, n + 1, delta);//�������� ��������� � ���� ������ 
					i = strsec.size() + n + 1;//����� � ����� ��� replace 
					second = atof(strsec.c_str());//������������
				}
				else
					second = getsecnum(s, n, i);

				if (s[n - 1] == ')')//����� ����� �� �����
				{
					strfir = bracklf(s, n - 1, delta);
					n -= delta; // ������ ��� ������ ���������� ��-�� ������ ������
					j = n - 1 - strfir.size();
					first = atof(strfir.c_str());
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
		for (int k = 0; k < s.size(); k++)//��������� ���� ���������, ����� � ������ ��������� ������ �����
			if (!isdigit(s[k]))
			{
				close = false;
				break;
			}
	}
	return s;
}