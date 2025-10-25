#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
	int flag=1;
    
    for(int i=1;i<=n;i++){
		int cnt=i+1;
		if(i==flag){
			for(int j=1;j<=i;j++){
				cout<<i;
			}
		}
		for(int j=1;j<=n-i;j++){
			cout<<cnt;
			cnt++;
		}
		flag++;
        cout<<endl;
    }
	return 0;
}