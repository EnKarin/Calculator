#include "pch.h"
#include "../Calculator/Sum.cpp"
#include "../Calculator/Diff.cpp"

TEST(TestSumInt, TestPozitive) {
	ASSERT_EQ(12, Sum(7, 5));
	ASSERT_EQ(50, Sum(12, 38));
	ASSERT_EQ(111, Sum(11, 100));
}

TEST(TestSumInt, TestNegative) {
	ASSERT_EQ(-47, Sum(-50, 3));
	ASSERT_EQ(0, Sum(11, -11));
	ASSERT_EQ(-5, Sum(-2, -3));
}

TEST(TestSumFloat, TestPozitive) {
	ASSERT_DOUBLE_EQ(1276.899, Sum(11.95, 1264.949));
	ASSERT_DOUBLE_EQ(50, Sum(24.999, 25.001));
	ASSERT_DOUBLE_EQ(0.67871, Sum(0.002, 0.67671));
}

TEST(TestSumFloat, TestNegative) {
	ASSERT_DOUBLE_EQ(-0.0012, Sum(-0.0007, -0.0005));
	ASSERT_DOUBLE_EQ(-150.555, Sum(-188.777, 38.222));
	ASSERT_DOUBLE_EQ(-11798.0065, Sum(-8369.00059, -3429.00591));
}

TEST(TestDiffInt, TestPozitive) {
	ASSERT_EQ(12, Diff(17, 5));
	ASSERT_EQ(570, Diff(790, 220));
	ASSERT_EQ(12049, Diff(20014, 7965));
}

TEST(TestDiffInt, TestNegative) {
	ASSERT_EQ(-12, Diff(-7, 5));
	ASSERT_EQ(-682, Diff(-1350, -668));
	ASSERT_EQ(123862, Diff(95953, -27909));
}

TEST(TestDiffFloat, TestPozitive) {
	ASSERT_DOUBLE_EQ(1.9777, Diff(1.9826, 0.0049));
	ASSERT_DOUBLE_EQ(-287.1076, Diff(596.1184, 883.226));
	ASSERT_DOUBLE_EQ(5524698.63579, Diff(6479520.00089, 954821.3651));
}

TEST(TestDiffFloat, TestNegative) {
	ASSERT_DOUBLE_EQ(-5.00008, Diff(-0.00008, 5));
	ASSERT_DOUBLE_EQ(-219.3775, Diff(-125.347, 94.0305));
	ASSERT_DOUBLE_EQ(21419508.747447, Diff(21482163.000007, 62654.25256));
}