#include <iostream>
#include<string>
#include<algorithm>
#include <vector>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	vector<string>w;
	string word = "";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ') {
			word += s[i];
		} else {
			if (!word.empty()) {
				w.push_back(word);
				word = "";
			}
		}
	}
	if (!word.empty()) {
		w.push_back(word);
	}
	reverse(w.begin(), w.end());
	string copy;
	for (int i = 0; i < w.size(); i++) {
		copy += w[i];
		if (i != w.size() - 1) { // don’t add space after last word
			copy += " ";
		}
	}
	cout << copy;
}