#include<iostream>
using namespace std;
int targetsumoptimised(int arr[], int n, int t) {
    int i = 0;
    int j = n - 1;
    int cnt = 0;
    while (i < j) {
        int sum = arr[i] + arr[j];
        if (sum == t) {
            cnt++;
            i++;
            j--;
        }
        else if (sum > t) {
            j--;
        }
        else {
            i++;
        }
    }
    return cnt;

}
int main() {
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(int);
    int t = 60;
    cout << targetsumoptimised(arr, n, t);
}