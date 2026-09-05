#include<iostream>
using namespace std;
#define MAX 5
int  stack[MAX];
int  top = -1;
void push(int n)
{
    if (top == MAX -1)
    {
        cout<<"stack overfilow";
    }
    else
    {
        top ++;
        stack[top] = n;
    }
}
int pop()
{
    if(top == -1)
    {
        cout<<"stack underfloe";
    }
    else{
       cout<<"deleted elem=ents   " << stack[top];
        top --;
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
        for(int i = 0; i <= top; i++)
        {
            cout<<stack[i];
        }

        pop();
        for(int i = 0; i <= top; i++)
        {
            cout<<stack[i] << pop();
        }
        return 0;

       
    
}