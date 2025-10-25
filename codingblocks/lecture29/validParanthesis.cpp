#include<iostream>
#include<stack>
#include<string>
using namespace std;
void isParanthesis(string s, stack<char>c, int i) {
	if (s[i] == '(' or s[i] == '{' or s[i] == ']') {
		c.push(s[i]);
		return true;
	} else {
		if (s[i] != c.top()) {
			return false;
		}
	}
	isParanthesis(s, c, i + 1);
}
int main() {
	string s = "({[]})"
	           stack<char>c;
	isParanthesis(s, c, 0);
}