#include "pch.h" 
#include "IncludeGuards.h" 
#include <string> 

using namespace std;

string Delete(string s)
{
	if (s != "0")
	    s.erase(s.size() - 1, 1);
	if (s == "0" || s.size() == 0)
		s = "0";
	return s;
}