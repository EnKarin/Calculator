#include <iostream>
#include <string>
#include "pch.h"
#include "IncludeGuards.h"
#include <math.h>

using namespace std;

int replace(string &s, int start, int end, double result)
{
	string res = to_string(result);
	for (int i = res.size() - 1; res[i] == '0' || res[i] == '.'; i--)//удаление незначащих нулей
	{
		if (res[i] == '.') {//если нет дробной части, удаляем и точку
			res.erase(res.size() - 1, 1);
			break;
		}
		res.erase(res.size() - 1, 1);
	}
	s = s.replace(start, end - start + 1, res);
	return start + res.size() - 1;
}