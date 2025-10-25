#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int profit(int length, vector<int>p) {
	if (length == 0) {
		return 0;
	}
	int n = p.size();
	int maxsofar = INT_MIN;
	for (int i = 1; i <= length; i++) {
		maxsofar = max(maxsofar, p[i - 1] + profit(length - i, p));
	}
	return maxsofar;
}
int main() {
	vector<int>p = {1, 5, 8, 9, 10, 17, 17, 20};
	int length = 8;
	cout << profit(length, p);
}