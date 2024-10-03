#include <bits/stdc++.h>
using namespace std;
 
 void pri_queue(){

    //maximum heap
    priority_queue<int> pq;

    pq.push(1);  //{1}
    pq.push(5);  //{5,1}
    pq.push(7);  //{7,5,1}
    pq.push(2);  //{7,5,2,1}
    pq.emplace(8);  //{8,7,5,2,1}

    cout<<pq.top();   //print 8

    pq.pop();    //{7,5,2,1}  


    // minimum heap

    priority_queue<int, vector <int> , greater <int>>pq;
    pq.push(5);  //{5}
    pq.push(2);  //{2,5}
    pq.push(8);  //{2,5,8}

    cout<<pq.top();   //print 2
 }
 
int main()
{
    pri_queue();
    return 0;
}