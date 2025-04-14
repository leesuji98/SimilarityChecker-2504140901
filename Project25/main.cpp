#include "gmock/gmock.h"
#include "stringChecker.cpp"

TEST(TS, TC1) {
	StringChecker stringChecker;
	stringChecker.setString("ASD", "DSA");
	int actual = stringChecker.pointOfLength();
	int expected = 60;
	EXPECT_EQ(expected, actual);
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
