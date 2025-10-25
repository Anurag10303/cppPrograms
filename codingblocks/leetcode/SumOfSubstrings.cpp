#include<iostream>
using namespace std;
int f(int n) {
	long long fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	return fact;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int r;
		cin >> r;
		long long num = f(n);
		long long den = f(n - r) * f(r);
		long long per = num / den;
		cout << per;
		cout << endl;
	}
}