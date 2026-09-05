#include<iostream>
#include<stack>
using namespace std;
struct Node 
{
    int data;
    Node * left;
    Node * right;

};
Node * create(int n)
{
    Node * newNode = new Node();
    newNode->data = n;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
Node * postorder(Node * root)
{
    stack<Node*> s1;
    stack<Node *> s2;
    s1.push(root);
    while(!s1.empty())
    {
        Node * curr = s1.top();
        s1.pop();
        s2.push(curr);
        if(curr->left != NULL)
    {
    s1.push(curr->left);
    }
    if(curr->right != NULL)
    {
        s1.push(curr->right);
    }
    }
    while(!s2.empty())
    {
        Node * curr = s2.top();
        s2.pop();
        cout<<curr->data;
    }


}