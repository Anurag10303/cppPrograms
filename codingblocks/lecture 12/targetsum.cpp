#include<iostream>
using namespace std;
int targetsumpair(int arr[], int n, int t) {
    int cnt = 0;
    for (int i = 0; i <= n - 2; i++) {
        int sum = 0;
        for (int j = i + 1; j < n; j++) {
            sum = arr[i] + arr[j];
            if (t == sum) {
                cnt++;
            }
        }
    }
    return cnt;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    int t = 60;
    cout << targetsumpair(arr, n, t);
}