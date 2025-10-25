#include <iostream>
#include <climits>
#include<vector>
using namespace std;
int main() {
	int n = 4243;
	int temp = n;
	int rev = 0;
	while (n > 0) {
		int num = n % 10;
		rev = rev * 10 + num;
		n = n / 10;
	}
	if (rev == temp) {
		cout << "palindrome";
	} else {
		cout << "not palindrome";
	}
}