#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> diff(n+1,0);
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;r--;
        diff[l]++;
        diff[r+1]--;
    }
    for(int i=1;i<=n;i++){
        diff[i]+=diff[i-1];
    }
    sort(v.begin(),v.end());
    sort(diff.begin(),diff.end()-1);
    for(int i=0;i<n;i++){
        v[i]*=diff[i];
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    cout<<sum<<" ";
    cout<<endl;
    return 0;
}