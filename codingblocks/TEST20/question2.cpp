#include<iostream>
#include<vector>
using namespace std;
bool canMake(vector<long long>&v, long long m, long long t, long long n) {
	long long sum = 0;
	for (long long i = 0; i < n; i++) {
		sum += m / v[i];
		if (sum >= t) {
			return true;
		}
	}
	return false;
}
int main() {
	long long n;
	long long t;
	cin >> n >> t;
	vector<long long>v(n);
	for (long long  i = 0; i < n; i++) {
		cin >> v[i];
	}
	long long s = 1;
	long long e = 1e18;
	long long ans = 0;
	while (s <= e) {
		long long m = s + (e - s) / 2;
		if (canMake(v, m, t, n)) {
			ans = m;
			e = m - 1;
		} else {
			s = m + 1;
		}
	}
	cout << ans;
	return 0;
}