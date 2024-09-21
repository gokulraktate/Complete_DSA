#include <bits/stdc++.h>
using namespace std;

// using backtracking

// 1 to n
// void fun1(int i,int n){
//     if(i<1)
//         return;
    
//     fun1(i-1,n);

//     cout<<i<<endl;
// }

// n to 1
void fun1(int i,int n){
    if(i<1)
        return;
    cout<<i<<endl;
    fun1(i-1,n);

    
}


int main(){
   int n;
    
    cout<<"Enter the length:"<<endl;
    cin>>n;


    fun1(n,n);

}