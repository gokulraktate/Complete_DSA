#include <bits/stdc++.h>
using namespace std;

// print nmae N times

// void f(int i,int n){
//     if(i>n)
//         return;
//     cout<<"Gokul"<<endl;
//     f(i+1,n);

//     // time complexity= O(n)
// }

// print lenearly from 1 to n

void fun(int i,int n){
    if(i>n)
        return;
    cout<<i<<endl;
    fun(i+1,n);

    // time complexity= O(n)
}

// print from n to 1
void fun1(int i,int n){
    if(i<1)
        return;
    cout<<i<<endl;
    fun1(i-1,n);

    // time complexity= O(n)
}


int main(){
    int n;
    //printing name n times
    cout<<"Enter the length:"<<endl;
    cin>>n;
    // f(1,n);

    // fun(1,n);

    fun1(n,n);

}