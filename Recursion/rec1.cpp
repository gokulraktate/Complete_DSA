#include <bits/stdc++.h>
using namespace std;
int c=0;
// void f()
//     {
//         cout<<"1";
//         f();
//         //stack overflow will occurs  i.e segmentation
//     }

// void f(){
//     cout<<c<<endl;
//     c++;
//     f();
// }

void f(){
    if(c==4){
        return;
    }  //to have our own limit
    cout<<c<<endl;
    c++;
    f();
}
int main(){

    f();
    
}