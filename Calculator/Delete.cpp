#include "pch.h" 
#include "IncludeGuards.h" 
#include <string> 

using namespace std;

string Delete(string s)
{
	if (s.size() == 1)
		s = "0";
	else 
		s.erase(s.size() - 1, 1);
	return s;
}