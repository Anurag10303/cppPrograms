#include <iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> f(vector<int>v, int n) {
	vector<int>ans;
	stack<int>s;
	for (int i = n - 1; i >= 0; i--) {
		while (!s.empty() and (v[s.top()]) >= v[i]) {
			s.pop();
		}
		if (s.empty()) {
			ans.push_back(-1);
		} else {
			ans.push_back(s.top());
		}
		s.push(i);

	}
	reverse(ans.begin(), ans.end());
	return ans;
}
int main() {
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	vector<int>ans = f(v, n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (ans[i] == -1) {
			sum += n - i;
		} else {
			sum += ans[i] - i;
		}
	}
	cout << sum;
}