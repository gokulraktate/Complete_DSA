#include <bits/stdc++.h>
using namespace std;
//  factorial using recursion
 int fact(int n){
    if(n==0) {
       return 1;
    }
    return n * fact(n-1);

 }

//  time complexity O(n)

int main()
{
    int n=4;
    cout<<fact(n);
    return 0;
}