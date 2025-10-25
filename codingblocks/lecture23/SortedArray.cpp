#include <iostream>
using namespace std;
bool IsSorted(int arr[], int n, int i) {
	if (i == n - 1) {
		return true;
	}
	return arr[i] < arr[i + 1] && IsSorted(arr, n, i + 1);
}
int main() {
	int arr[] = {10, 20, 30, 60, 50};
	int n = sizeof(arr) / sizeof(int);
	int i = 0;
	IsSorted(arr, n, i) ? cout << "sorted" : cout << "not sorted";
	return 0;
}