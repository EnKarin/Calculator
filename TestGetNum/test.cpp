#include "pch.h"
#include <string>
#include "../Calculator/GetFirNum.cpp"
#include "../Calculator/GetSecNum.cpp"

TEST(GetNumTest, TestGetFirNum) {
	std::string s = "10+80*5";
	int j;
	ASSERT_DOUBLE_EQ(10, getfirnum(s, 2, j));
}

TEST(GetNumTest, TestGetSecNum)
{
	std::string s = "10+80*5";
	int j;
	ASSERT_DOUBLE_EQ(80, getsecnum(s, 2, j));
}