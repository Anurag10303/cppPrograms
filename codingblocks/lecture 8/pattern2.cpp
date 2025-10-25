#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        if (i>=3){
            for(int j=1;j<=i;j++){
                if(j==1 or j==i){
                    cout<<i;
                }
                else{
                    cout<<0;
                }
            }
        }
        else{
            for(int j=1;j<=i;j++){
                cout<<i;
            }
        }
    cout<<endl;
    }
    return 0;
}