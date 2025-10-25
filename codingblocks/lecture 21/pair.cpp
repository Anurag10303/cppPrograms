#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main()
{
    vector<pair<int, int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
    for (pair<int, int> p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
    return 0;
}
