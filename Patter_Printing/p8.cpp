/*
 *******
  *****   
   ***
    *


*/

//logic
/*
this is the space star space logic
if n=6

0  11 0
1  9  1
2  7  2
3  5  3
4  3  4
5  1  5


*/



#include <bits/stdc++.h>
using namespace std;

void pattern(){
    int n;
    cout<<"enter the no:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    
    {   //space
        for(int j=0;j<i;j++)
         
        {
           cout<<" "; 
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++)
         
        {
           cout<<"*";
        }
        //space
        for(int j=0;j<i;j++)
         
        {
           cout<<" ";
        }
    
    cout<<endl;
        
    }
   
}

int main(){
    pattern();
}