//greatest number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int lsf=0;
    int i=1;
    while(i<=n){
        int x;
        cin>>x;

        if(x>lsf){
            lsf=x;
            
        }
        i=i+1;
        
    }
    cout<<lsf;
}
