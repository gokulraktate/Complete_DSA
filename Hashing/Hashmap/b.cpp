#include <bits/stdc++.h>
using namespace std;
 

 
int main()
{

    cout<<"enter string:"<<endl;
    string s;
    cin>>s;

//map stores everything in sorted order
//map has Key value pair

    
//  unordered_map<char , int> mpp;     same but stores in random order
    map<char , int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;

    }


    cout<<"enter no of query:"<<endl;

    int q;
    cin>>q;
    while(q--){
         char c;
        cin>>c;

        cout<<mpp[c]<<endl;

    }



    return 0;
}