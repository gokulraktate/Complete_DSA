#include <bits/stdc++.h>
using namespace std;
 
 void multiSet(){
    multiset<int> ms;
    ms.insert(1);    //{1}
    ms.insert(1);    //{1,1}
    ms.insert(1);    //{1,1,1}

    ms.erase(1);    //all 1's are erased

    int cnt=ms.count(1);

    ms.erase(ms.find(1));
    //only single one erased

    ms.erase(ms.find(1) , ms.find(1+2));
    
 }
 
int main()
{
    return 0;
}