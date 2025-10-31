#include <iostream>
#include <vector>
using namespace std;
int f(int n, vector<int>&dp) {
	if (dp[n] != -1) {
		return dp[n];
	}
	return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}
int main() {
	int n = 6;
	vector<int>dp(n + 1, -1);
	dp[0] = 0;
	dp[1] = 1;
	cout << f(n, dp) << endl;
	return 0;
}