#include "pch.h" 
#include "IncludeGuards.h" 
#include <string> 

using namespace std;

string check(string s)
{
	int k = 0;
	if (s[0] == '(' && s[s.size() - 1] == ')')
	{
		s.erase(0, 1);
		s.erase(s.size() - 1, 1);
	}
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