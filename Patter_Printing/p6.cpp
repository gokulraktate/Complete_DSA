/*

1234
123
12
1

*/


#include <bits/stdc++.h>
using namespace std;

void pattern(){
    int n;
    cout<<"enter the no:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<j<<" ";
        } 
        cout<<endl;
    }
   
}

int main(){
    pattern();
}