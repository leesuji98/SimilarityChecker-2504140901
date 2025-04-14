#include <string>
#include <iostream>
#include <unordered_set>
using std::string;
using std::unordered_set;

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
		unordered_set<char> totalSet, set1, set2;

		for (char c : s1)
			set1.insert(c);

		for (char c : s2)
			set2.insert(c);

		totalSet = set1;
		totalSet.insert(set2.begin(), set2.end());

		int totalCnt = totalSet.size();
		int sameCnt = 0;

		for (char c : set1)
			if (set2.count(c)) sameCnt++;

		return (sameCnt * 40) / totalCnt;
	}

};