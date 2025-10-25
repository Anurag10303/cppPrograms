#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    while(pow(4,i)<n){
        if(n/pow(4,i)==1){
            cout<<"power of 4";
            break;
        }
        i++;
    }
    if(pow(4,i)>n){
        cout<<"not power of 4";
    } 
}