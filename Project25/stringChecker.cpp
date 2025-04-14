#include <string>
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
	}
};