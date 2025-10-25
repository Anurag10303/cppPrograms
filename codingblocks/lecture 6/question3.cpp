#include<iostream>
using namespace std;
int main(){
    char a;
    int upp=0;
    int low=0;
    int whi=0;
    int digit=0;
    int spe=0;
    while(true){
        a=cin.get();
        if(a=='$'){
            break;
        }
       
                
        if(a>='A' and a<='Z'){
            upp++;
        }
        else if(a>='a' and a<='z'){
            low++;

        }
        else if(a>='0' and a<='9'){
            digit++;
        }
        else if(a==' ' or a=='\n' or a=='\t'){
            whi++;
        }
        else {
            spe++;
        }

        }
        cout<<"lower case"<<low;
        cout<<"upper case"<<upp;
        cout<<"digit"<<digit;
        cout<<"special"<<spe;
        cout<<"white space"<<whi;
                
    }
