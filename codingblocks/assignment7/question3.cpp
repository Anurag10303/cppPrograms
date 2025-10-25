#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool f(vector<int>&v, int n, int mid , int constraint) {
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += (v[i] + mid - 1) / mid;

		if (ans > constraint) {
			return false;
		}
	}
	return true;
}
int least(vector<int>&v, int constraint, int n) {
	int s = 1;
	int e = *max_element(v.begin(), v.end());
	int ans;
	while (s <= e) {
		int  mid = s + (e - s) / 2;
		if (f(v, n, mid, constraint)) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int constraint;
	cin >> constraint;
	cout << least(v, constraint, n);
}