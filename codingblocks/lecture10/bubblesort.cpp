#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    bool flag=false;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(flag==false){
            break;
        }
    }
}
int main(){
    int arr[]={50,40,30,20,10};
    int n=sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}