#include <iostream>
using namespace std;
#define MAX 5
int queue[MAX];
int front = -1;
int rear = - 1;
int enqueue(int value)
{
    if(rear == MAX - 1)
    {
        cout<<"queue overflow";


    }
    else 
    {
      if( front == -1)
      {
        front = 0;
      }
      rear ++;
        queue[rear] = value;
    }
    return 0;
}
int dequeue()
{
    if(front == -1 || front > rear)
    {
        cout<<"queue underflow";
       
    }
     else   
        {
          cout<<"dequeue elements: "<<queue[front];
          front++;
          
        }
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    for(int i = front; i < rear; i++)
    {
        cout<<queue[i];
    }
    dequeue();
     for(int i = front; i < rear; i++)
    {
        cout<<queue[i];
    }
    return 0;
}