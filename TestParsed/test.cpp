#include "pch.h"
#include <string>
#include "../Calculator/Pars.cpp"
#include "../Calculator/GetFirNum.cpp"
#include "../Calculator/GetSecNum.cpp"
#include "../Calculator/Diff.cpp"
#include "../Calculator/Div.cpp"
#include "../Calculator/Expon.cpp"
#include "../Calculator/Root.cpp"
#include "../Calculator/Sum.cpp"
#include "../Calculator/Multi.cpp"
#include "../Calculator/Replace.cpp"

using namespace std;

TEST(BasicTest, FirstTest) {
	string s = "3*5";
	string result = "15";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(BasicTest, SecondTest) {
	string s = "5+5";
	string result = "10";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(MiddleTest, FirstTest) {
	string s = "(3+5)*7";
	string result = "56";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(MiddleTest, SecondTest) {
	string s = "3*5+7";
	string result = "22";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(MiddleTest, ThirdTest)
{
	string s = "2+2*2";
	string result = "6";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(HardTest, FirstTest) {
	string s = "(3*5)+(7*3)";
	string result = "36";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(HardTest, SecondTest) {
	string s = "(3*5+3)+(5*4-3)";
	string result = "35";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(HardTest, ThirdTest)
{
	string s = "(3+5*3)+(5-4/2)";
	string result = "21";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(VeryHardTest, FirstTest) {
	string s = "((3*5)+(7-3))+(116/2)";
	string result = "77";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(VeryHardTest, SecondTest) {
	string s = "(2*2)^";
	string result = "154";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(VeryHardTest, ThirdTest) {
	string s = "Sqrt16";
	string result = "4";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}