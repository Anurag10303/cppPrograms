#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n = 5;
	int i = 0;
	while (true) {
		if (pow(2, i) < n) {
			i++;
		} else {
			break;
		}
	}
	cout << i << endl;
	int mask = (1 << i);
	cout << mask;
}