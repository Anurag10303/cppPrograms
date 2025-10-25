#include<iostream>
#include<vector>
using namespace std;
bool compareMap(int tfreq[], int wfreq[]) {
	for (int i = 0; i < 26; i++) {
		if (tfreq[i] != wfreq[i]) {
			return false;
		}
	}
	return true;
}
int main() {
	string s = "cbaebabacbabc";
	string t = "abc";
	int cnt = 0;
	int n = s.size();
	int m = t.size();
	int tfreq[26] = {0};
	for (int i = 0; i < m; i++) {
		tfreq[t[i] - 'a']++;
	}
	int i = 0;
	int j = 0;
	int wfreq[26] = {0};
	while (j < m) {
		wfreq[s[j] - 'a']++;
		j++;
	}
	if (compareMap(tfreq, wfreq)) cnt++;
	while (j < n) {
		wfreq[s[i] - 'a']--;
		i++;
		wfreq[s[j] - 'a']++;
		j++;
		if (compareMap(tfreq, wfreq)) cnt++;
	}
	cout << cnt;
}