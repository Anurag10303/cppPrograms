#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>v = {1, 4, 2, 7, 6, 3, 5};
	int n = v.size();
	vector<int>psum(n + 1);
	psum[0] = 0;
	for (int i = 1; i <= n; i++) {
		psum[i] = psum[i - 1] + v[i - 1];
	}
	for (int num : psum) {
		cout << num << " ";
	}
	cout << endl;
	int maxsofar = 0;
	int sum = 0;
	int i = 0;
	int j = 4;
	while (j <= n) {
		sum = psum[j] - psum[i];
		maxsofar = max(sum, maxsofar);
		j++;
		i++;
	}
	cout << maxsofar;
}

