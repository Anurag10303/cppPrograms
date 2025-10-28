#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>v = {1, 4, 2, 7, 6, 3, 5};
	int maxsofar = 0;
	int sum = 0;
	int i = 0;
	int j = 0;
	int k = 4;
	int n = v.size();
	while (j < k) {
		sum += v[j];
		j++;
	}
	maxsofar = sum;
	while (j < n) {
		sum -= v[i];
		i++;
		sum += v[j];
		j++;
		maxsofar = max(maxsofar, sum);
	}
	cout << maxsofar;
}