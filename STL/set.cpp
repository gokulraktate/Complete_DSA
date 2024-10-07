#include <bits/stdc++.h>
using namespace std;
 
 void explainSet(){
    set <int> st;   //no duplication as it is unique and it is in sorted
    st.insert(1);   //{1}
    st.emplace(2);  //{1,2}
    st.insert(2);   //{1,2}
    st.insert(4);   //{1,2,4}
    st.insert(3);   //{1,2,3,4}

    auto it=st.find(3);    //gives the iteration of number

    auto it=st.find(8);    //if not found then iteration goes to the end()

    st.erase(4);   //4 will be removed


    //{1,2,3,4,5}

    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);
    //{1,4,5}

    //count

    int cnt=st.count(1);

 }
 
int main()
{
    return 0;
}