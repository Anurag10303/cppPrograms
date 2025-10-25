#include<iostream>
#include<cstring>
using namespace std;
void f(char inp[], int n, int i) {
	if (inp[i] == '\0') {
		cout << inp << endl;
		return;
	}
	for (int j = i; j < n; j++) {
		swap(inp[i], inp[j]);
		f(inp, n, i + 1);
		swap(inp[j], inp[i]);
	}
}
int main() {
	char inp[] = "abc";
	int n = strlen(inp);
	f(inp, n, 0);
	return 0;
}