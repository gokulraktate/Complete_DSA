#include <bits/stdc++.h>
using namespace std;
//  fibonacci series 
 int fib(int n){
    if(n<=1){
        return n;
    }
    int a=fib(n-1);
    int b=fib(n-2);
    return a+b;
 }
 
int main()
{
    
    cout<<fib(10);
    return 0;
}