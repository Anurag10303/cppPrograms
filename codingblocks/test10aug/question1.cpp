#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	long long n;
	cin >> n;
	vector<pair<long long, long long>> v(n);

	for (long long i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}

	sort(v.begin(), v.end());

	long long cnt = 1;
	long long maxEnd = v[0].second;

	for (long long i = 1; i < n; i++) {
		if (v[i].first < maxEnd) { // overlap
			cnt++;
		}
		maxEnd = max(maxEnd, v[i].second);
	}
	cout << cnt;
	return 0;
}
