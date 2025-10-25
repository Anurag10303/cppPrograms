#include<iostream>
using namespace std;
void generatepair(int arr[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    generatepair(arr, n);
}