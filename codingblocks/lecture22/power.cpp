#include <iostream>
using namespace std;
int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    int A = power(x, y / 2);
    if (y % 2 == 0)
    {
        return A * A;
    }
    else
    {
        return x * A * A;
    }
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << power(x, y);
}