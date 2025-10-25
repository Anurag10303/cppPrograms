#include <iostream>
#include <vector>
using namespace std;
int f(int n, vector<int>&dp) {
	if (dp[n] != -1) {
		return dp[n];
	}
	if (n == 0 || n == 1) {
		return dp[n] = n;
	}
	return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}
int main() {
	int n = 7;
	vector<int>dp(n + 1, -1);
	cout << f(n, dp) << endl;
	return 0;
}