#include<iostream>
using namespace std;
bool CanWatch(int n, int m, const vector<vector<int>>&v) {
	for (long long  i = 0; i < n; i++) {
		for (long long j = 0; j < 2; j++) {

		}
	}
}
int main() {
	int n;
	cin >> n;
	vector<vector<long long >>v(n, vector<long long >(2));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> v[i][j];
		}
	}
	long long  s = 1;
	long long  e = 2 * 1e5;
	int ans = 0;
	while (s <= e) {
		long long  m = s + (e - s) / 2;
		if (CanWatch(n, m, v)) {
			ans = m;
			s = m + 1;
		} else {
			e = m - 1;
		}
	}
}