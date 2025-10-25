#include<iostream>
#include <vector>
using namespace std;
int main() {
	long long n;
	cin >> n;
	long long t;
	cin >> t;
	vector<long long>v(n);
	for (long long i = 0; i < n; i++) {
		cin >> v[i];
	}
	long long i = 0;
	long long j = 0;
	long long sum = 0;
	long long maxsofar = 0;
	while (j < n) {
		sum += v[j];
		while (sum > t) {
			sum -= v[i];
			i++;
		}
		if (sum <= t) {
			maxsofar = max(maxsofar, j - i + 1);
		}
		j++;
	}
	cout << maxsofar;
}