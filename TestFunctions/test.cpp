#include "pch.h"
#include "../Calculator/Sum.cpp"

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
