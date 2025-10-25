#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		long long n;
		cin >> n;

		vector<long long> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		long long cnt = 0;
		for (long long i = 0; i < n - 1; i++) {
			for (long long j = i + 1; j < n; j++) {
				if (v[i] > v[j]) {
					cnt++;
				}
			}
		}

		cout << cnt << endl;
	}

	return 0;
}
