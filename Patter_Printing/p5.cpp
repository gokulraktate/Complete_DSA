/*

****
***
**
*


*/


#include <bits/stdc++.h>
using namespace std;

void pattern(){
    int n;
    cout<<"enter the no:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<"*";
        } 
        cout<<endl;
    }
   
}

int main(){
    pattern();
}