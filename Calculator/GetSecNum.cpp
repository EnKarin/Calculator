#include <iostream>
#include "IncludeGuards.h"
#include "pch.h"
#include <string>

double getsecnum(std::string s, int n, int &i)//получаем число справа от знака
{
	i = n + 1;
	while (i < s.size() && isdigit(s[i]))
		i++;
	return atof(s.substr(n + 1, n - i - 1).c_str());
}