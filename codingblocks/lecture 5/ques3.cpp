//fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    if (n==0 or n==1){
        cout<<n;}
    
    int a=0;
    int b=1;
    
    int i=1;
    int c;
    while (i<=n-1){
        c=a + b;
        a=b;
        b=c;
        i=i+1;
        while(x<=c){
            if(x==c){
                cout<<"true";
                break;
            
            }
            else{
                cout<<"false";
            }
        }
    }
    cout<<c;
    
}