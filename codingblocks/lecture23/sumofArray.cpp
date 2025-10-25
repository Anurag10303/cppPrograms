#include<iostream>
using namespace std;
int SumOfArray(int arr[], int n, int i) {
	if (i == n - 1) {
		return arr[n - 1];
	}
	int A = SumOfArray(arr, n, i + 1);
	return arr[i] + A;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int i = 0;
	cout << SumOfArray(arr, n, i);
	return 0;
}