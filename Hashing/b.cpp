#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    cout<<"enter string"<<endl;
    string s;
    cin>>s;

    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    cout<<"enter char to check:"<<endl;
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        cout<<hash[c-'a']<<endl;

    }
    return 0;
}