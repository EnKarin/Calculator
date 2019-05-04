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
#include "../Calculator/Check.cpp"

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
	string s = "(2*4)^";
	string result = "64";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(VeryHardTest, ThirdTest) {
	string s = "Sqrt(16+33)";
	string result = "7";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(VeryHardTest, FourtyTest) {
	string s = "Sqrt(42+22)+11^";
	string result = "129";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(VeryHardTest, FiftyTest) {
	string s = "Sqrt(4*6/3*2)+3^-4*2";
	string result = "5";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(VeryHardTest, SixtyTest) {
	string s = "(7*(Sqrt(6*2*4+1))-2)+3^/3-((4*2)-3*2)";
	string result = "48";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(TestDivZero, TestDivZeroIntro) {
	string s = "1/0";
	string result = "Division by zero is impossible";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}


TEST(TestDivZero, TestDivZeroExp) {
	string s = "((5*4)-1/1)/(5/5-1)";
	string result = "Division by zero is impossible";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(TestRealNum, TestOtric)
{
	string s = "((5-6)*-1)-6";
	string s2 = "1--5*3";
	string s3 = "5-8*2";
	string s4 = "7+(-11/4)";
	string s5 = "7+-11/8";
	string result = "-5";
	string result2 = "16";
	string result3 = "-11";
	string result4 = "4.25";
	string result5 = "5.625";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
	ASSERT_STRCASEEQ(result2.c_str(), parse(s2).c_str());
	ASSERT_STRCASEEQ(result3.c_str(), parse(s3).c_str());
	ASSERT_STRCASEEQ(result4.c_str(), parse(s4).c_str());
	ASSERT_STRCASEEQ(result5.c_str(), parse(s5).c_str());
}

TEST(TestRealNum, FistSymvol)
{
	string s = "-5/2";
	string result = "-2.5";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
}

TEST(TestRealNum, TestDrob)
{
	string s = "(1/10)+2";
	string s2 = "7/4*11--5";
	string result = "2.1";
	string result2 = "24.25";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
	ASSERT_STRCASEEQ(result2.c_str(), parse(s2).c_str());
}

TEST(TestRoot, TestRootNegative) {
	string s = "Sqrt(-25)";
	string s2 = "Sqrt(25*9/88-11)";
	string s3 = "Sqrt(25.94*9.01/88-11.99)";
	string result = "There is no negative root";
	ASSERT_STRCASEEQ(result.c_str(), parse(s).c_str());
	ASSERT_STRCASEEQ(result.c_str(), parse(s2).c_str());
	ASSERT_STRCASEEQ(result.c_str(), parse(s3).c_str());
}

TEST(TestCheck, TestCheck) {
	string s1 = "((1+9", s2 = "(1*2+4)", s3 = "(Sqrt(4)*", s4 = "(9*(1+5)-10/2*3)";
	string result = "Incorrect brackets", result2 = "6", result4 = "39";
	ASSERT_STRCASEEQ(result.c_str(), check(s1).c_str());
	ASSERT_STRCASEEQ(result2.c_str(), check(s2).c_str());
	ASSERT_STRCASEEQ(result.c_str(), check(s3).c_str());
	ASSERT_STRCASEEQ(result4.c_str(), check(s4).c_str());
}