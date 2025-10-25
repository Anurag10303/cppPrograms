#include<iostream>
using namespace std;
void greet (){
    cout<<"namaste"<<endl;
}
int add(int a ,int b){
    return a+b;
}
bool ascending (int a,int b){
    return a>b;
}
int main(){
    cout<<(void*)&greet<<endl;
    cout<<(void*)&add<<endl;
    cout<<(void*)&ascending<<endl;

}