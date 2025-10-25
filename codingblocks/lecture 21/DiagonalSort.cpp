#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void SortDiagonal(int mat[][10], int m, int n, int i, int j) {
	int dlen = min(m - i, n - j);
	vector<int>diagonal(dlen);
	for (int k = 0; k < dlen; k++) {
		diagonal[k] = mat[i + k][j + k];
	}
	sort(diagonal.begin(), diagonal.end());
	for (int k = 0; k < dlen; k++) {
		mat[i + k][j + k] = diagonal[k];
	}
}
void sortMatrix(int mat[][10], int m, int n) {
	for (int j = 0; j < n; j++) {
		SortDiagonal(mat, m, n, 0, j);
	}
	for (int i = 0; i < m; i++) {
		SortDiagonal(mat, m, n, i, 0);
	}
}
int main() {
	int mat[][10] = {
		{50, 80, 20},
		{90, 10, 70},
		{60, 30, 40}
	};
	int m = 3;
	int n = 3;
	sortMatrix(mat, m, n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}