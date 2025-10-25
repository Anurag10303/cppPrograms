#include<iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int open = 0;
	int close = 0;
	int maxsofar = 0;
	for (char ch : s) {
		if (ch == '(') {
			open++;
		} else if (ch == ')') {
			close++;
		}
		maxsofar = max(maxsofar, open - close);
	}
	cout << maxsofar;
}