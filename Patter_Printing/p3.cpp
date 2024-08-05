/*

1
12
123
1234

*/

#include <bits/stdc++.h>
using namespace std;

void pattern(){
    int n;
    cout<<"enter the no:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        } 
        cout<<endl;
    }
   
}

int main(){
    pattern();
}