#include<iostream>
#include<map>
#include <vector>
using namespace std;
int main() {
	map<string , vector<string>>phoneMap;
	phoneMap["abc"].push_back("1234");
	phoneMap["abc"].push_back("5678");
	phoneMap["xyz"].push_back("0000");
	phoneMap["xyz"].push_back("1111");
	for (pair<string, vector<string>>p : phoneMap) {
		string name = p.first;
		vector<string>nums = p.second;
		cout << name << " ";
		for (string num : nums) {
			cout << num << " ";
		}
		cout << endl;
	}
}