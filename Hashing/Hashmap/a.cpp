#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    cout<<"enter size:"<<endl;
    int n;
    
    cin>>n;
    int a[n];
    cout<<"enter array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

//map stores everything in sorted order
//map has Key value pair
    map<int , int> mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;

    }

    //iterate in the map

    // for(auto it:mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }



    cout<<"enter no of query:"<<endl;

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;

        cout<<mpp[num]<<endl;

    }



    return 0;
}