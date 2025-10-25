#include<iostream>
#include<vector>
using namespace std;
int sum(vector<vector<int>>grid, int m, int n, int i, int j) {
	if (i == m - 1 and j == n - 1) {
		return grid[i][j];
	}
	if (i == m - 1) {
		return grid[i][j] + f(grid, m, n, i, j + 1);
	}
	if (j == n - 1) {
		return grid[i][j] + f(grid, m, n, i + 1, j);
	}
	int x = f(grid, m, n, i, j + 1);
	int y = f(grid, m, n, i + 1, j);
	return gird[i][j] + min(x, y);
}
int main() {
	int m =;
	int n =;

	vector<vector<int>>v(m, n);
	sum(v, m, n, i, j);

}