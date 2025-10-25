#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    int srt=sqrt(n);
    for(int i=2;i<=srt;i++){
        if(n%i==0){
            return false;

        }
    }
    return true;
}
int printprime(int n){
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    printprime(n);
    return 0;
}