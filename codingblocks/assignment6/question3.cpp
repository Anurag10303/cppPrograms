#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n; int m; int k; int s;
	cin >> n >> m >> k >> s;
	vector<vector<char>>v(n, vector<char>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}
	bool islost = false;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v[i][j] == '.') {
				s -= 2;
			} else if (v[i][j] == '*') {
				s += 5;
			}
			if (j == m - 1 or v[i][j] == '#' ) {
				break;
			} else {
				s--;
			}
			if (s > k) {
				continue;
			} else {
				islost = true;
				break;
			}
		}
	}
	if (islost) {
		cout << "No";
	}
	if (!islost) {
		cout << "Yes" << endl;
		cout << s;
	}
	return 0;
}