#include<iostream>
using namespace std;
bool f(char maze[][10], int m, int n, int i, int j) {
	if (maze[i][j] == 'x') {
		return false;
	}
	if (i == m - 1 and j == n - 1) {
		return true;
	}
	if (i == m - 1 ) {
		return f(maze, m, n, i, j + 1);
	}
	if ( j == n - 1) {
		return f(maze, m, n, i + 1, j);
	}
	return f(maze, m, n, i + 1, j) ||
	       f(maze, m, n, i, j + 1);

}
int main() {
	char maze[][10] = {
		"0000",
		"0x00",
		"00xx",
		"000x"
	};
	int m = 4;
	int n = 4;
	f(maze, m, n, 0, 0) ? cout << "path found" : cout << "path not found";
}