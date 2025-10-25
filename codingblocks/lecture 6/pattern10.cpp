#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int l=n/2;
    for(int i=1;i<=l+1;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=l;i++){
        for(int j=1;j<=l-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
        

    }

    return 0;
}