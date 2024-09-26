#include <bits/stdc++.h>
using namespace std;
//  all divisors of number
 void div(int n){
    for(int i=1;i<=n;i++){
         if(n%i==0){
             cout<<i<<" ";
    }
    }
 }
 
int main()
{
    int n;
    cin>>n;
    div(n);
    return 0;
}