#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        int j=1;
        int temp=i;
        while(j<=n-i){
            cout<<" ";
            j=j+1;
        }
        int k=1;
        while(k<=i){
            cout<<temp;
            temp++;
            k=k+1;
        }
        int l=1;
        int a=i;
        
        while(l<=i-1){
            cout<<a;
            a++;
            l=l+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}