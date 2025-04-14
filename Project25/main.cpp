#include "gmock/gmock.h"
#include "stringChecker.cpp"

class SimilarityCheckerFixture : public testing::Test {
public:
	StringChecker stringChecker;

	void lengthChecker(int expected, string s1, string s2) {
		stringChecker.setString(s1, s2);
		int actual = stringChecker.pointOfLength();
		EXPECT_EQ(expected, actual);
	}
};

TEST_F(SimilarityCheckerFixture, TC1) {
	lengthChecker(60, "ASD", "DSA");
}

TEST_F(SimilarityCheckerFixture, TC2) {
	lengthChecker(0, "A", "BB");
}

TEST_F(SimilarityCheckerFixture, TC3) {
	lengthChecker(20, "AAABB", "BAA");
}

TEST_F(SimilarityCheckerFixture, TC4) {
	lengthChecker(30, "AA", "AAE");
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
