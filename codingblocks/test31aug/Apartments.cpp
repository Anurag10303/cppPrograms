#include <iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	int m;
	cin >> m;
	int k;
	cin >> k;
	vector<int>A(n);
	vector<int>B(m);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> B[i];
	}
	int cnt = 0;
	int i = 0;
	int j = 0;
	while (j < m) {
		while (i < n) {
			if (abs(A[i] - B[j]) <= k) {
				cnt++;
				break;
			} else {
				i++;
			}
		}
		j++;
	}
	cout << cnt;
}