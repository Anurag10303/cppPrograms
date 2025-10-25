#include<iostream>
#include<vector>
using namespace std;
void f(vector<int>c, int target, vector<int>v) {
	if (target == 0) {
		for (int el : v) {
			cout << el << " ";
		}
		cout << endl;
		return;
	}
	for (int op : c) {
		if (op <= target) {
			v.push_back(op);
			f(c, target - op, v);
			v.pop_back();
		}
	}
}
int main() {
	vector<int>c = {2, 3, 5, 7};
	int target = 7;
	vector<int>v;
	f(c, target, v);
}