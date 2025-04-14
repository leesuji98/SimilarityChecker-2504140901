#include "gmock/gmock.h"
#include "stringChecker.cpp"

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}