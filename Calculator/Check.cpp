#include "pch.h" 
#include "IncludeGuards.h" 
#include <string> 

using namespace std;

string check(string s)
{
	int k = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
			k++;
		if (s[i] == ')')
			k--;
	}
	if (k == 0)
		return parse(s);
	else
		return "Incorrect brackets";
}