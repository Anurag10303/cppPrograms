#include<iostream>
#include <string>
#include<cstring>
using namespace std;
int main() {
	string s;
	cin >> s;
	string result = "";
	for (int i = 0; i < s.size(); i++) {
		char ch = s[i];
		if (!result.empty() and result.back() == ch) {
			result.pop_back();
		} else {
			result.push_back(ch);
		}

	}
	cout << result;
}