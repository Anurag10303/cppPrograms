#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n=sizeof(arr)/sizeof(int);
    int k=3;
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    while(i<j){
        int i=0;
        int j=k-1;
        swap(arr[i],arr[j]);
        i++;
        j--;
    }   
    while(i<j){
        int i=k;
        int j=n-1; 
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    while(i<=j){
        cout<<arr[i]<<" ";
        i++;
    }
    
    cout<<endl;
    return 0;


}