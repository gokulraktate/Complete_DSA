#include <bits/stdc++.h>
using namespace std;
 
// LIFO
 void explainStack(){
    stack<int> st;
    st.push(1);  //{1}
    st.push(2);  //{2,1}
    st.push(3);  //{3,2,1}
    st.push(4);  //{4,3,2,1}
    st.emplace(5);  //{5,4,3,2,1}

    cout<<st.top();   //print 5
    st.pop();   //{4,3,2,1}

    cout<<st.size();  //4
    cout<<st.empty();  //false

    // swap
     stack<int> st1,st2;
     st1.swap(st2);


 }
 
int main()
{
    return 0;
}