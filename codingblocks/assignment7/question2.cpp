#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool f(vector<int>v, int mid, int n, int m) {
	int x = 1;
	int i = 0;
	int pages = 0;
	while (i < n) {
		pages += v[i];
		if (pages > mid) {
			pages = 0;
			x++;
			continue;
		}
		i++;
	}
	return x <= m;
}
int minvalue(vector<int>v, int n, int m) {
	int s = *max_element(v.begin(), v.end());
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += v[i];
	}
	int e = sum;
	int ans = 0;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (f(v, mid, n, m)) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return ans;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<int>v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		cout << minvalue(v, n, m);
	}
}