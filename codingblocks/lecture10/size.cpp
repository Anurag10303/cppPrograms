#include<iostream>

using namespace std;
int great=0;

// time : O(n^3)

void generateSubarrays(int arr[], int n) {

	for (int i = 0; i <= n - 1; i++) {

		for (int j = i; j <= n - 1; j++) {
			int sum=0;
			for(int k=i;k<=j;k++){
				sum=sum+arr[k];
			}
			great=max(great,sum);
		}
	}
	cout<<great;
}

int main() {

	int arr[] = {-1,2,-3,4,-1,2,1,-5,4};
	int n = sizeof(arr) / sizeof(int);

	generateSubarrays(arr, n);

	return 0;
}