#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int cnt=1;
		for(int j=1;j<=i;j++){
			cout<<cnt<<" ";
			cnt++;
		}
		for(int j=1;j<=n-i;j++){
			cout<<"  ";
		}
		for(int j=1;j<=n-i-1;j++){
			cout<<"  ";
		}
		int cn=i;
		int c=n-1;
		if(i<=n-1){
			for(int j=1;j<=i;j++){
				cout<<cn<<" ";
				cn--;
			}
		}
		else if(i==n){
			for(int j=1;j<i;j++){
				cout<<c<<" ";
				c--;
			}
		}
		cout<<endl;

	}
	return 0;
}