#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int a){
    int b=sqrt(a);
    for(int i=2;i<=b;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;


}
int main(){
    int a;
    cin>>a;
    isprime(a)?cout<<"is prime"<<endl:cout<<a<<"is not prime"<<endl;
    
    return 0;
}