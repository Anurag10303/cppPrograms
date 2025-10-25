#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    char ch;
	int x=0;
	int y=0;
	while(true){
		ch=cin.get();
		if(ch=='\n'){
			break;
		}
		if(ch=='n'){
			y++;
		}
		if(ch=='s'){
			y--;
		}
		if(ch=='e'){
			x++;
		}
		if(ch=='w'){
			x--;
		}
	}
	cout<<x<<","<<y<<"\t";
	if(x>0){
		for(int i=1;i<=x;i++){
			cout<<'e'<<"\t";
		}
	}
	if(y>0){
		for(int i=1;i<=y;i++){
			cout<<'n'<<"\t";
		}
	}
	if(y<0){
		for(int i=1;i<=-y;i++){
			cout<<'s'<<"\t";
		}
	}
	if(x<0){
		for(int i=1;i<=x;i++){
			cout<<'w'<<"\t";
		}
	}

	return 0;
}