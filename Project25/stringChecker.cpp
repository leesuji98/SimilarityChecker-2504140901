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
		int s1len = s1.length();
		int s2len = s2.length();
		if (s1len >= s2len * 2) return 0;
		if (s2len >= s1len * 2) return 0;

		return -1;
	}
};