#include<iostream>
using namespace std;
void merge(int arr[], int s, int m, int e) {
	int temp[100];
	int i = s;
	int j = m - 1;
	int k = s;
	while (i <= m and j <= e) {
		if (arr[i] < arr[j]) {
			temp[k] = arr[i];
			i++;
			k++;
		} else {
			temp[k] = arr[j];
			j++;
			k++;
		}
	}
	while (i <= m) {
		temp[k] = arr[i];
		i++;
		k++;
	}
	while (j <= e) {
		temp[k] = arr[j];
		j++;
		k++;
	}
	for (int i = s; i <= e; i++) {
		arr[i] = temp[i];
	}
}
void mergeSort(int arr[], int s, int e) {
	if (s == e) {
		return;
	}
	int m = s + (e - s) / 2;
	mergeSort(arr, s, m);
	mergeSort(arr, m + 1, e);
	merge(arr, s, m, e);
}
int main() {
	int arr[] = {10, 20, 40, 30, 50};

}