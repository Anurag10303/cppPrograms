#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a=n^m;
    int cnt=0;
    int i=0;
    while(a>0){
        cnt+=a&1;
        a=a>>1;
    }
    cout<<cnt;
}