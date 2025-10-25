#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int>v = {10, 20, 30, 40, 50};
	int n = v.size();
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			for (int k = i; k <= j; k++) {
				cout << v[k] << " ";
			}
			cout << endl;
		}
	}
}