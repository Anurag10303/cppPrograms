#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    char str[]="naman";
    bool cnt=true;
    int n=strlen(str);
    int i=0;
    int j=n-1;
    while(i<j){
        if(str[i]==str[j]){
            i++;
            j--;
        }
        else{
            cout<<"not palindrome";
            cnt=false;
            break;
        }
    }
    if(cnt==true){
        cout<<"palindrome";
    }

}