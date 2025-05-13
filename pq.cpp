#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    //less makes top the greatest,,,, greater makes the top the smallest 
    //pop pops from the top
    priority_queue<int ,vector<int> ,less <int> > pq;
    pq.push(1);
    pq.push(3);
    pq.push(1);
    pq.push(1);
    pq.push(1);
    //pq.pop();
    cout<<pq.top();
}