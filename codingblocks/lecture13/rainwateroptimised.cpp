#include<iostream>
#include<vector>
using namespace std;
int trap(vector <int>&h){
    int n=h.size();
    int total=0;
    int i=0;
    int j=n-1;
    int l=0;
    int r=0;
    while(i<=j){
        l=max(l,h[i]);
        r=max(r,h[j]);
        if(l<r){
            int wi=l-h[i];
            total+=wi;
            i++;
        }else{
            int wj=r-h[j];
            total+=wj;
            j--;
        }
    }
    return total;
}
int main(){
    vector<int>h={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(h);
    return 0;
}