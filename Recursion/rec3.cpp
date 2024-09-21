#include <bits/stdc++.h>
using namespace std;
//  sum of n numbers

void f(int i, int sum){
    if(i<1){
       cout<<sum<<endl;
       return;
       }
    f(i-1,sum+i);
}
 
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    f(n,0);
    
}