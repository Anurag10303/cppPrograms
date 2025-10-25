#include <iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int t;
	cin >> t;
	int s = 0;
	int e = n - 1;
	bool found = false;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (v[mid] == t) {
			found = true;
			break;
		}
		if (v[s] < v[mid]) {
			if (v[s] <= t && t < v[mid]) {
				e = mid - 1;
			} else {
				s = mid + 1;
			}
		}
		else if (v[mid] < v[e]) {
			if (v[mid] < t && t <= v[e]) {
				s = mid + 1;
			} else {
				e = mid - 1;
			}
		}
		else {
			s++;
			e--;
		}
	}
	if (!found) {
		cout << "false";
	}
	return 0;
}