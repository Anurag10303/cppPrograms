#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int cnt=i;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<cnt;
            cnt++; 
        }
        cnt=cnt-2;
        for(int j=1;j<=i-1;j++){
            cout<<cnt;
            cnt--;
        }
        cout<<endl;
        
    }

    return 0;
}