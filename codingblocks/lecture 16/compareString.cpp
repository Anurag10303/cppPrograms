#include<iostream>
using namespace std;
int stringCompare(char s1[],char s2[]){
    int i=0;
    int j=0;
    while(s1[i]=='\0' or s2[j]=='\0'){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }else if(s1[i]>s2[j]){
            return 1;
        }else{
            return -1;
        }
    }
    if(s1[i]=='\0' and s2[j]=='\0'){
        return 0;
    }else if(s1[i]!='\0'){
        return 1;
    }else{
        return -1;
    }
}
int main(){
    char s1[]="abc";
    char s2[]="abc";
    int ans=stringCompare(s1,s2);
    if (ans==0){
        cout<<s1<<"is equal to "<<s2<<endl;
    }else if (ans>0){
        cout<<s1<<">"<<s2<<endl;
    }else{
        cout<<s1<<"<"<<s1<<endl;
    }
}