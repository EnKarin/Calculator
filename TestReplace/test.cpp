#include "pch.h"
#include "../Calculator/Replace.cpp"
#include <string>

using namespace std;

TEST(TestReplace, FirstTest) {
	string s1 = "2*(5+7)";
	string s2 = "(8/4)-1";
	ASSERT_EQ(4, replace(s1, 3, 5, 12));
	ASSERT_EQ(1, replace(s2, 1, 3, 2));
}