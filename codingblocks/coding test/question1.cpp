#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    long long prefix = arr[n - 1];
    int cnt = 1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] <= prefix)
        {
            cnt++;
            prefix += arr[i];
        }
        else
        {
            continue;
        }
    }

    cout << cnt << endl;
    return 0;
}
