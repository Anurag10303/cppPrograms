//find square root of n
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double ans=0;
    while(ans*ans<=n){
        ans=ans+1;
    }
    ans=ans-1;
    while(ans*ans<=n){
        ans=ans+0.1;
    }
    ans=ans-0.1;
    cout<<ans;
}