#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long n, x;
	cin >> n >> x;
	vector<long long> p(n);
	for (int i = 0; i < n; i++) cin >> p[i];

	sort(p.begin(), p.end());

	int i = 0, j = n - 1;
	int cnt = 0;

	while (i <= j) {
		if (p[i] + p[j] <= x) {
			i++; // pair i and j
		}
		j--; // j always goes (alone or paired)
		cnt++;
	}

	cout << cnt << endl;
	return 0;
}
