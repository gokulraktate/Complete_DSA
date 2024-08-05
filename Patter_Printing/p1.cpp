/*
to print 

* * * *
* * * *
* * * *
* * * *

*/

#include <iostream>
using namespace std;
int n;
void p1(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"*";
        } 
        cout<<endl;
    }
   
}
void p2(){ 
  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        } 
        cout<<endl;
    }
   
}

int main(){
  
    p1();
    
    cin>>n;
    p2();
}