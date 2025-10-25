#include<iostream>
using namespace std;
int f(char maze[][10], int m, int n, int i, int j) {
	if (i == m || j == n) {
		return 0;
	}
	if (maze[i][j] == 'x') {
		return 0;
	}
	if (i == m - 1 and j == n - 1) {
		return 1;
	}
	int x = f(maze, m, n, i , j + 1);
	int y = f(maze, m, n, i + 1, j );
	return x + y;

}
int main() {
	char maze[][10] = {
		"0000",
		"00x0",
		"000x",
		"0x00"
	};
	int m = 4;
	int n = 4;
	cout << f(maze, m, n, 0, 0) ;
}