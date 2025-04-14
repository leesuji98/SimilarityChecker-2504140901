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
		int A, B;
		
		A = s1.length();
		B = s2.length();

		if (B > A) {
			int temp = B;
			B = A;
			A = temp;
		}

		if (A >= B * 2) return 0;

		int gap = A - B;
		return (B - gap) * 60 / B;
	}
};