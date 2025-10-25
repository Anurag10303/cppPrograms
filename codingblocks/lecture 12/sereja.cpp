#include<iostream>
using namespace std;
void serejaanddima(int arr[],int n){
    int i=0;
    int j=n-1;
    int sereja=0;
    int dima=0;
    bool issereja=true;
    while(i<=j){
        if(issereja){
            if(arr[i]>arr[j]){
                sereja+=arr[i];
                i++;
            }
            else{
                sereja+=arr[j];
                j--;
            }
            issereja=false;
        }
        else{
            if(arr[i]>arr[j]){
                dima+=arr[i];
                i++;
            }
            else{
                dima+=arr[j];
                j--;
            }
            issereja=true;
        }
    }
    cout<<sereja<<" "<<dima;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    serejaanddima(arr,n);
} 