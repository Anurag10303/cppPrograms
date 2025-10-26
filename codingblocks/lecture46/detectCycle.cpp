#include <iostream>
#include<vector>
using namespace std;
class disjointSet {
	vector<int>par;
public:
	disjointSet(int n) {
		par.resize(n + 1);
	}
	void createSet(int x) {
		par[x] = x;
	}
	int findSet(int x) {
		//base case
		if (par[x] == x) {
			return x;
		}
		//recursice case
		return par[x] = findSet(par[x]);
	}
	void unionSet(int x, int y) {
		int lx = findSet(x);
		int ly = findSet(y);
		if (lx != ly) {
			par[lx] = ly; // par[ly]=lx;
		}
	}
};
int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>>edges;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		edges.push_back({u, v});
	}

	disjointSet ds(n);
	for (int i = 1; i <= n; i++) {
		ds.createSet(i);
	}
	bool flag = false;
	for (vector<int>e : edges) {
		int u = e[0];
		int v = e[1];
		if (ds.findSet(u) != ds.findSet(v)) {
			ds.unionSet(u, v);
		} else {
			// v and v are in the set i.e.
			//they are part of the same component
			//which means there si already a path b/w
			//them and now we've also ahve an edge
			//b/w them so we've a cycle
			flag = true;
			break;
		}
	}
	if (flag == false) {
		cout << "no cycle found" << endl;
	} else {
		cout << "cycle found" << endl;
	}
	return 0;
}