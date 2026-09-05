#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node  * right;
};
Node * create(int n){
    Node * newNode = new Node();
    newNode ->data = n;
    newNode->left =  NULL;
    newNode->right = NULL;
    return newNode;

}
void preorder(Node *root)
{
    stack<Node * > s;
    Node * curr = root;
    s.push(root);
    while(!s.empty())
    {
        Node * curr = s.top();
        s.pop();
        cout<<curr->data;

        if(curr->right  != NULL)
        s.push(curr->right);

        if(curr->left != NULL)
        s.push(curr->left);

    }
}
int main()
{
Node * root = create(1);
root->left = create(2);
root->right = create(3);
root->left->left = create(4);
root->left->right = create(5);

preorder(root);
return 0;
}
