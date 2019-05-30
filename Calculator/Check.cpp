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
	{
		s = parse(s);
		for (int i = 0; i < s.size();)
		{
			if (s[i] == '(' || s[i] == ')')
				s.erase(i, 1);
			else
				i++;
		}
		for (int i = 0; i < s.size() - 1; i++)
			if (s.substr(i, 2) == "--")
				s.erase(i, 2);
		return s;
	}
	else
		return "Incorrect brackets";
}