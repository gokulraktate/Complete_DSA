#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n,rev=0;
    cin>>n;
    while(n>0){
        int a=n%10;
        rev=(rev*10)+a;
        n=n/10;
    }
    cout<<rev;
    return 0;
}