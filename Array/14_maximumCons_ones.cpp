#include <bits/stdc++.h>
using namespace std;
 
 //maximum consecutive ones
 int maxi(vector<int> &a,int n){
    int count=0;
    int m=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            count++;
            m=max(m,count);
        }
        else{
            count=0;
        }
    }
    return m;

 }
 
int main()
{
    int n=10;
    vector<int> a={1,1,0,0,1,1,1,1,0,1};
    int res=maxi(a,n);
    cout<<res;
    return 0;
}