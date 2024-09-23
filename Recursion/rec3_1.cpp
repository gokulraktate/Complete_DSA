#include <bits/stdc++.h>
using namespace std;
 
 int f(int n){
    if(n==0){
        return 0;

    }
    return n + f(n-1);
 }

 
int main()
{
 int n=5;
int result=f(n);

cout<<result;

    return 0;
}