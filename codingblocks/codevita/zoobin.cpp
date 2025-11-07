#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int E;
    cin >> E;

    vector<pair<int, int>> currentEdges(E), expectedEdges(E);
    map<pair<int, int>, bool> currentPaths, expectedPaths;

    // Read current layout
    for (int i = 0; i < E; i++) {
        int a, b;
        cin >> a >> b;
        currentEdges[i] = {a, b};
        currentPaths[ {min(a, b), max(a, b)}] = true;
    }

    // Read expected layout
    for (int i = 0; i < E; i++) {
        int a, b;
        cin >> a >> b;
        expectedEdges[i] = {a, b};
        expectedPaths[ {min(a, b), max(a, b)}] = true;
    }

    // Build adjacency list from current layout
    map<int, vector<int>> adj;
    set<int> nodes;
    for (auto [a, b] : currentEdges) {
        adj[a].push_back(b);
        adj[b].push_back(a);
        nodes.insert(a);
        nodes.insert(b);
    }

    // Find all cycles and compute minimum rotations
    set<int> visited;
    int maxRotations = 0;

    for (int start : nodes) {
        if (visited.count(start)) continue;

        // Find cycle starting from this node
        vector<int> cycle;
        int curr = start;
        int prev = -1;

        while (true) {
            cycle.push_back(curr);
            visited.insert(curr);

            // Find next node in cycle
            int next = -1;
            for (int neighbor : adj[curr]) {
                if (neighbor != prev) {
                    next = neighbor;
                    break;
                }
            }

            if (next == start) break;
            prev = curr;
            curr = next;
        }

        int n = cycle.size();
        if (n < 3) continue; // Not a valid cycle

        // Build expected position map for this cycle
        map<int, int> expectedPos;
        for (auto [a, b] : expectedEdges) {
            if (expectedPaths.count({min(a, b), max(a, b)})) {
                auto it1 = find(cycle.begin(), cycle.end(), a);
                auto it2 = find(cycle.begin(), cycle.end(), b);
                if (it1 != cycle.end() && it2 != cycle.end()) {
                    int pos1 = it1 - cycle.begin();
                    int pos2 = it2 - cycle.begin();
                    if (abs(pos1 - pos2) == 1 || abs(pos1 - pos2) == n - 1) {
                        // This edge is part of our cycle in expected layout
                        if (!expectedPos.count(a)) {
                            expectedPos[a] = pos1;
                        }
                    }
                }
            }
        }

        // Calculate minimum rotations for this cycle
        int minRot = n;
        for (int rot = 0; rot < n; rot++) {
            bool match = true;
            for (int i = 0; i < n; i++) {
                int currentNode = cycle[i];
                int rotatedPos = (i + rot) % n;
                int expectedNode = cycle[rotatedPos];

                // Check if this rotation brings us closer to expected layout
                // We need to verify edges match
            }

            // Try this rotation
            vector<int> rotated(n);
            for (int i = 0; i < n; i++) {
                rotated[(i + rot) % n] = cycle[i];
            }

            // Check if edges match expected
            bool valid = true;
            for (int i = 0; i < n; i++) {
                int next = (i + 1) % n;
                int a = rotated[i];
                int b = rotated[next];
                if (!expectedPaths.count({min(a, b), max(a, b)})) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                minRot = min(minRot, rot);
            }
        }

        maxRotations = max(maxRotations, minRot);
    }

    cout << maxRotations << endl;

    return 0;
}