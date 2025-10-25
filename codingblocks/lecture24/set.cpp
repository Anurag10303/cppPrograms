#include<iostream>
#include<set>
using namespace std;
int main() {
	set<int>s;
	s.insert(5);
	s.insert(4);
	s.insert(3);
	s.insert(2);
	s.insert(1);
	s.insert(0);

	cout << "size" << " " << s.size() << endl;
	for (int x : s) {
		cout << x << " ";
	}
	cout << endl;
	s.erase(5);
	cout << "size" << " " << s.size() << endl;
	for (int x : s) {
		cout << x << " ";
	}


}
