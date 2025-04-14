#include <string>
#include <iostream>
using std::string;

class StringChecker {
private:
	string s1;
	string s2;
public:
	void setString(string a, string b) {
		s1 = a, s2 = b;
	}

	bool isSameLength() const {
		return s1.length() == s2.length();
	}

	int pointOfLength() {
		if (isSameLength()) return 60;
		int largeString, smallString;
		
		largeString = s1.length();
		smallString = s2.length();

		if (smallString > largeString)
			std::swap(smallString, largeString);

		if (largeString >= smallString * 2) return 0;

		int gap = largeString - smallString;
		return (smallString - gap) * 60 / smallString;
	}

	int pointOfAlpha() {

	}

};