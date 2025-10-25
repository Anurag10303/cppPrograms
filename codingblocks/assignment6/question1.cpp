#include<iostream>
#include<vector>
using namespace std;
int main() {
	int m;
	int n;
	cin >> m >> n;
	vector<vector<int>>v(m, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}
	int sr = 0;
	int sc = 0;
	int er = m - 1;
	int ec = n - 1;
	while (sr <= er and sc <= ec) {
		for (int i = sr; i <= er; i++) {
			cout << v[i][sc] << ",";
		}
		sc++;
		for (int j = sc; j <= ec; j++) {
			cout << v[er][j] << ",";
		}
		er--;

		for (int i = er; i >= sr; i--) {
			cout << v[i][ec] << ",";
		}
		ec--;
		for (int j = ec; j >= sc; j--) {
			cout << v[sr][j] << ",";
		}
		sr++;
	}
	cout << "END";
	return 0;
}
