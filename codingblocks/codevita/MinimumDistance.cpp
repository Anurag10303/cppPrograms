#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int E;
    cin >> E;

    vector<pair<int, int>> currentEdges(E), expectedEdges(E);
    set<pair<int, int>> currentPaths, expectedPaths;

    // Read current layout
    for (int i = 0; i < E; i++) {
        int a, b;
        cin >> a >> b;
        currentEdges[i] = {a, b};
        currentPaths.insert({min(a, b), max(a, b)});
    }

    // Read expected layout
    for (int i = 0; i < E; i++) {
        int a, b;
        cin >> a >> b;
        expectedEdges[i] = {a, b};
        expectedPaths.insert({min(a, b), max(a, b)});
    }

    // Build adjacency list from current layout
    map<int, vector<int>> adj;
    set<int> nodes;
    for (int i = 0; i < E; i++) {
        int a = currentEdges[i].first;
        int b = currentEdges[i].second;
        adj[a].push_back(b);
        adj[b].push_back(a);
        nodes.insert(a);
        nodes.insert(b);
    }

    // Find all cycles and compute minimum rotations
    set<int> visited;
    int maxRotations = 0;

    for (set<int>::iterator nodeIt = nodes.begin(); nodeIt != nodes.end(); ++nodeIt) {
        int start = *nodeIt;
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
            for (int j = 0; j < (int)adj[curr].size(); j++) {
                int neighbor = adj[curr][j];
                if (neighbor != prev) {
                    next = neighbor;
                    break;
                }
            }

            if (next == start) break;
            if (next == -1) break;
            prev = curr;
            curr = next;
        }

        int n = (int)cycle.size();
        if (n < 3) continue; // Not a valid cycle

        // Calculate minimum rotations for this cycle
        int minRot = n;
        for (int rot = 0; rot < n; rot++) {
            // Try this rotation
            vector<int> rotated(n);
            for (int i = 0; i < n; i++) {
                rotated[i] = cycle[(i + n - rot) % n];
            }

            // Check if edges match expected
            bool valid = true;
            for (int i = 0; i < n; i++) {
                int nextIdx = (i + 1) % n;
                int a = rotated[i];
                int b = rotated[nextIdx];
                pair<int, int> edge = {min(a, b), max(a, b)};
                if (expectedPaths.find(edge) == expectedPaths.end()) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                minRot = min(minRot, rot);
                break; // Found minimum for this cycle
            }
        }

        maxRotations = max(maxRotations, minRot);
    }

    cout << maxRotations << endl;

    return 0;
}