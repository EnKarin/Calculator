#include <iostream>
#include "IncludeGuards.h"
#include "pch.h"
#include <string>

double getfirnum(std::string s, int n, int &j)
{
	j = n - 1;
	while (j >= 0 && (isdigit(s[j]) || s[j] == '.' || (s[j] == '-') && j == 0))
		j--;
	return atof(s.substr(j + 1, n - j - 1).c_str());
}