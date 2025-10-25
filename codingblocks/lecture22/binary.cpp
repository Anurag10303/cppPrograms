#include<iostream>
#include<string>
using namespace std;
string f(int n) {
	if (n == 0) {
		return "0";
	}
	string fromfriend = f(n / 2);
	return fromfriend + to_string(n % 2);
}
int main() {
	int n = 20;
	cout << f(n);
	return 0;
}