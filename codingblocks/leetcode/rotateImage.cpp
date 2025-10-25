#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int i = n - 2;
	while (i >= 0 && v[i] >= v[i + 1]) {
		i--;
	}
	int j = n - 1;
	while (i >= 0) {
		if (v[j] > v[i]) {
			swap(v[i], v[j]);
			j--;
		}
	}
	reverse(v.begin() + i + 1, v.end());
}