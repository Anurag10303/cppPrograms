#include<iostream>
#include<vector>
using namespace std;
void countsort(vector<int>v,int k){
    int n=v.size();
    vector<int>freq(k+1);
    for(int i=0;i<n;i++){
        int x=v[i];
        freq[x]++;
    }
    for(int i=0;i<k+1;i++){
        for(int j=1;j<=freq[i];j++){
            cout<<i<<" ";
        }
    }
}
int main (){
    vector<int>v={1,0,3,2,3,1,2,0,2};
    int k=3;
    countsort(v,k);
}