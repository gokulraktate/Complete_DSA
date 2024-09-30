#include <bits/stdc++.h>
using namespace std;
 
 void gcd(int n, int n1){
    int g=1;
    for(int i=1;i<=min(n,n1);i++){
        if(n%i==0 && n1%i==0){
            g=i;
        }

    }
    cout<<g;

 }
 
int main()
{
    cout<<"Enter Two Numbers:";
    int n,n1;
    cin>>n>>n1;
    gcd(n,n1);
    return 0;
}