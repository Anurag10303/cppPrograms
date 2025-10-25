#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>
using namespace std;
int main() {
	int arr[] = {5, 3, 6, 7, 2, 1, 4};
	int n = sizeof(arr) / sizeof(int);
	stack<int>s;
	vector<int>v;
	for (int i = n - 1; i >= 0; i--) {
		while (!s.empty() and arr[i] >= s.top()) {
			s.pop();
		}
		if (s.empty()) {
			v.push_back(-1);
		} else {
			v.push_back(s.top());
		}
		s.push(arr[i]);
	}
	reverse(v.begin(), v.end());
	for (auto x : v) {
		cout << x << " ";
	}
}