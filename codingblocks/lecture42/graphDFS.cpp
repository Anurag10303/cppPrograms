#include<iostream>
#include<vector>
using namespace std;
void dfs(int cur, const vector<vector<int>>&adj, vector<bool>&vis) {
	vis[cur] = true;
	cout << cur << " ";
	for (int ngb : adj[cur]) {
		if (!vis[ngb]) {
			dfs(ngb, adj, vis);
		}
	}
}
int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>>adj(n);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int s = 0;
	vector<bool>vis(n, false);
	dfs(s, adj, vis);
}