#include <bits/stdc++.h>
using namespace std;
 

// FIFO
 void explainQueue(){
    queue<int> q;
    q.push(1);  //{1}
    q.push(2);  //{1,2}
    q.push(3);  //{1,2,3}
    q.push(4);  //{1,2,3,4}
    q.emplace(5);  //{1,2,3,4,5}

    cout<<q.front();  //print 1
    q.pop();    //{2,3,4,5}

 }
 
int main()
{
    return 0;
}