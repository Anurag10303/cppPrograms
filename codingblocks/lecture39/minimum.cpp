#include<iostream>
#include <climits>
#include <vector>
using namespace std;
int fTopdown(int n, vector<int>&dp) {
	if (dp[n] != -1) {
		return dp[n];
	}
	if (n == 1) {
		return dp[1] = 0;
	}
	int o1 = INT_MAX;
	if (n % 3 == 0) {
		o1 =   fTopdown(n / 3, dp);
	}
	int o2 = INT_MAX;
	if (n % 2 == 0) {
		o2 =   fTopdown(n / 2, dp);
	}
	int o3 = fTopdown(n - 1, dp);
	return dp[n] = 1 + min(o1, min(o2, o3));
}

int fBottomup(int n) {
	vector<int>dp(n + 1);
	dp[1] = 0;
	for (int i = 2; i <= n; i++) {
		int op1 = dp[i - 1];
		int op2 = INT_MAX;
		if (i % 2 == 0) {
			op2 = dp[i / 2];
		}
		int op3 = INT_MAX;
		if (i % 3 == 0) {
			op3 = dp[i / 3];
		}
		dp[i] = 1 + min(op1, min(op2, op3));
	}
	return dp[n];
}

int f(int n) {
	if (n == 1) {
		return 0;
	}
	int o1 = INT_MAX;
	if (n % 3 == 0) {
		o1 =   f(n / 3);
	}
	int o2 = INT_MAX;
	if (n % 2 == 0) {
		o2 =   f(n / 2);
	}
	int o3 = f(n - 1);
	return 1 + min(o1, min(o2, o3));
}
int main() {
	int n = 13;
	vector<int>dp(n + 1, -1);
	cout << fBottomup(n) << endl;
	cout << fTopdown(n, dp) << endl;
	cout << f(n);
}