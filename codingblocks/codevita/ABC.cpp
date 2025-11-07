#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <sstream>
#include <string>
using namespace std;

int getLCSLength(const vector<char>& s1, const vector<char>& s2) {
    int n = s1.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][n];
}
int main() {
    int n;
    if (!(cin >> n)) return 0;
    vector<char> items(n);
    for (int i = 0; i < n; ++i) {
        string token;
        if (!(cin >> token)) return 0;
        items[i] = token[0];
    }
    string line;
    getline(cin, line);
    if (!getline(cin, line)) {
        line = "";
    }
    vector<int> fixed;
    stringstream ss(line);
    int pos;
    while (ss >> pos) {
        if (pos >= 1 && pos <= n) {
            fixed.push_back(pos - 1);
        }
    }
    int cntA = 0, cntB = 0, cntC = 0;
    for (char c : items) {
        if (c == 'A') cntA++;
        else if (c == 'B') cntB++;
        else if (c == 'C') cntC++;
    }
    vector<vector<char>> orders = {
        {'A', 'B', 'C'}, {'A', 'C', 'B'},
        {'B', 'A', 'C'}, {'B', 'C', 'A'},
        {'C', 'A', 'B'}, {'C', 'B', 'A'}
    };

    int minShifts = INT_MAX;
    bool possible = false;

    for (const auto& order : orders) {
        vector<char> target;
        for (char owner : order) {
            int count = (owner == 'A') ? cntA : (owner == 'B') ? cntB : cntC;
            for (int i = 0; i < count; ++i) {
                target.push_back(owner);
            }
        }
        bool valid = true;
        for (int idx : fixed) {
            if (idx < 0 || idx >= n) continue;
            if (items[idx] != target[idx]) {
                valid = false;
                break;
            }
        }
        if (!valid) continue;
        int lcs = getLCSLength(items, target);
        int shifts = n - lcs;

        possible = true;
        minShifts = min(minShifts, shifts);
    }

    if (possible) {
        cout << minShifts;
    } else {
        cout << "Impossible";
    }

    return 0;
}