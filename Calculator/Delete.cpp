#include "pch.h" 
#include "IncludeGuards.h" 
#include <string> 

using namespace std;

string Delete(string s)
{
	s.erase(s.size() - 1, 1);
	return s;
}