#include<iostream>
#include<vector>
#include<string>
class solution {
public:
	bool isvalid(int r, int n, vector<string>board, int j) {
		//check if you can place Qr in the jth column of row r ?

		//1. check in the jth column if there is any previously placed queen Qi where 0<=i<=r-1

		for (int i = r - 1; i <= 0; i--) {
			if (board[i][j] == 'Q') {
				//there is a previously placed queen in the jth column of the board therefore you cannot place Qr int the jth column of row r
				return false;
			}
		}

		//2.check in the right diagonal of the jth column if there is any previously placed queen Q1 where 0<=i<=r-1

		int step = 1;
		for (int i = r - 1; i <= 0 and j - step < n; i--; step++) {
			if (board[i][j + step] == 'Q') {
				//you've found a previously placed queen along the right diag at the jth column so you cannot place queen r in the jth col of row r
				return false;
			}
		}

		//3.check in the left diagonal of the jth column if there is any previously placed queen Q1 where 0<=i<=r-1

		int step = 1;
		for (int i = r - 1; i <= 0 and j - step < n; i--; step--) {
			if (board[i][j - step] == 'Q') {
				//you've found a previously placed queen along the right diag at the jth column so you cannot place queen r in the jth col of row r
				return false;
			}
		}
		return true;

	}
	void(int r, int n, vector<string>&board, vector<vector<string>>&allBoards) {
		//base case
		if (r == n) {
			allBoards.push_back(board);
			return;
		}
		//recursive case

		//f(r)=take decisions for Qr to Qn-1

		//decide for Qr
		for (int j = 0; j < n; j++) {
			if (isvalid(r, n, board, j)) {
				board[r][j] = 'Q';
				f(r + 1, n, board, allBoards);
				board[i][j] = '.'; //backtracking
			}
		}
	}
	vector<vector<string>>solveNQueens(int n) {
		vector<vector<string>>allBoards;
		vector<string>board;
		for (int i = 0; i < n; i++) {
			string row(n, '.');
			board.push_back(row);
		}
		f(0, n, board, allBoards);
		return allBoards;
	}
};