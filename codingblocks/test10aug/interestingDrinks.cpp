#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool f2(long long budget, long long mid, vector<long long>&v) {
	if (v[mid] <= budget) {
		return true;
	}
	return false;
}
long long f(long long n, vector<long long>&v, long long q, long long budget) {
	long long s = 0;
	long long e = v.size() - 1;
	int ans = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (f2(budget, mid, v)) {
			ans = mid;
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}
	return ans;
}
int main() {
	long long n;
	cin >> n;
	vector<long long>v(n);
	for (long long i = 0; i < n; i++) {
		cin >> v[i];
	}
	int q;
	cin >> q;
	vector<long long>p(q);
	for (long long i = 0; i < q; i++) {
		cin >> p[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < q; i++) {
		int ans = f(n, v, q, p[i]);
		if (ans == -1) {
			cout << 0;
		} else {
			cout << ans + 1;
		}
		cout << endl;
	}
}