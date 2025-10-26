#include<iostream>
#include<set>
#include <string>
using namespace std;
int longestPalindrome(string &str) {
	set<char>s;
	int ans = 0;
	for (char ch : str) {
		if (s.find(ch) == s.end()) {
			s.insert(ch);
		} else {
			ans += 2;
			s.erase(ch);
		}
	}
	if (s.size() > 1) ans++;
	return ans;
}
int main() {
	string str = "ccccdd";
	cout << longestPalindrome(str);
}