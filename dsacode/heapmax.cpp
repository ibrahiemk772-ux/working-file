#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    cout<<"top elements"<< pq.top()<<" ";
    pq.pop();
    cout<<"after pop" <<pq.top()<<" ";
    return 0;

}