#include<iostream>
using namespace std;
int main(){
    char a;
    int count=0;
    int i=1;
    while(true){
        a=cin.get();
        if(a=='$'){
            break;
        }
        count++;
    }
    cout<<count;

}