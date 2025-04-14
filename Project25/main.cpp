#include "gmock/gmock.h"
#include "stringChecker.cpp"

TEST(TS, TC1) {
	StringChecker stringChecker;
	stringChecker.setString("ASD", "DSA");
	int actual = stringChecker.pointOfLength();
	int expected = 60;
	EXPECT_EQ(expected, actual);
}

TEST(TS, TC2) {
	StringChecker stringChecker;
	stringChecker.setString("A", "BB");
	int actual = stringChecker.pointOfLength();
	int expected = 0;
	EXPECT_EQ(expected, actual);
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
