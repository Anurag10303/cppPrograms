#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 15;
const int MAX_LEN = 6;
struct State {
	int r, c, o;
};
int M, N;
int L = 0;
vector<string> grid;
State start_state;
State target_state;

int dist[MAX_SIZE][MAX_SIZE][2];
int dr[] = { -1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};
bool isValidPlacement(int r, int c, int o) {
	if (o == 0) {
		if (r < 0 || r >= M || c < 0 || c + L > N) {
			return false;
		}
		for (int k = 0; k < L; ++k) {
			if (grid[r][c + k] == 'B') {
				return false;
			}
		}
	} else {
		if (r < 0 || r + L > M || c < 0 || c >= N) {
			return false;
		}
		for (int k = 0; k < L; ++k) {
			if (grid[r + k][c] == 'B') {
				return false;
			}
		}
	}
	return true;
}
bool canRotate(int r, int c) {
	// Check bounds for the L x L box
	if (r < 0 || r + L > M || c < 0 || c + L > N) {
		return false;
	}
	for (int i = r; i < r + L; ++i) {
		for (int j = c; j < c + L; ++j) {
			if (grid[i][j] == 'B') {
				return false;
			}
		}
	}
	return true;
}
bool findInitialAndTargetStates() {
	bool found_start = false;
	bool found_target = false;

	// First pass: Find 'l' to determine start state and length L
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			if (grid[i][j] == 'l') {
				if (!found_start) {
					start_state = {i, j, 0}; // Initial guess: Horizontal
					found_start = true;
				}
				L++;
			}
		}
	}

	if (!found_start) return false;
	if (L > 1 && start_state.c + 1 < N && grid[start_state.r][start_state.c + 1] == 'l') {
		start_state.o = 0;
	} else if (L > 1 && start_state.r + 1 < M && grid[start_state.r + 1][start_state.c] == 'l') {
		start_state.o = 1;
	}
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			if (grid[i][j] == 'L') {
				if (!found_target) {
					target_state = {i, j, 0};
					found_target = true;
				}
				if (j + 1 < N && grid[i][j + 1] == 'L') {
					target_state.o = 0;
				} else if (i + 1 < M && grid[i + 1][j] == 'L') {
					target_state.o = 1;
				}
				break;
			}
		}
		if (found_target) break;
	}

	return found_target;
}
bool isTarget(const State& s) {
	return s.r == target_state.r && s.c == target_state.c && s.o == target_state.o;
}
int solve() {
	if (!(cin >> M >> N)) return -1;

	grid.resize(M);
	for (int i = 0; i < M; ++i) {
		string line;
		getline(cin, line);
		while (line.empty()) {
			getline(cin, line);
		}
		stringstream ss(line);
		char cell;
		for (int j = 0; j < N; ++j) {
			ss >> cell;
			grid[i] += cell;
		}
	}

	if (!findInitialAndTargetStates()) {
		return -1;
	}
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			dist[i][j][0] = dist[i][j][1] = -1;
		}
	}
	queue<State> q;
	q.push(start_state);
	dist[start_state.r][start_state.c][start_state.o] = 0;
	while (!q.empty()) {
		State current = q.front();
		q.pop();

		int r = current.r;
		int c = current.c;
		int o = current.o;
		int current_dist = dist[r][c][o];
		if (isTarget(current)) {
			return current_dist;
		}
		for (int i = 0; i < 4; ++i) {
			int nr = r + dr[i];
			int nc = c + dc[i];
			int no = o;
			if (isValidPlacement(nr, nc, no)) {
				if (dist[nr][nc][no] == -1) {
					dist[nr][nc][no] = current_dist + 1;
					q.push({nr, nc, no});
				}
			}
		}
		int nr = r;
		int nc = c;
		int no = 1 - o;
		if (canRotate(r, c)) {
			if (dist[nr][nc][no] == -1) {
				dist[nr][nc][no] = current_dist + 1;
				q.push({nr, nc, no});
			}
		}
	}
	return -1;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int result = solve();

	if (result != -1) {
		cout << result << endl;
	} else {
		cout << "Impossible" << endl;
	}
	return 0;
}