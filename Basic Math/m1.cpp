#include <bits/stdc++.h>
using namespace std;
 
 //reversing a number
int main()
{
    int n;
    cin>>n;
    while(n>0){
        int result=n%10;
        cout<<result;
        n=n/10;
    }
    return 0;
}