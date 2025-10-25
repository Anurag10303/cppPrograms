//prime no.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<=sqrt(n)){
        if(n%i==0){
            cout<<"not prime no.";
            break;
        }
        i=i+1;
        
    }
    if(i>=sqrt(n)){cout<<"prime no.";}
    return 0;
}