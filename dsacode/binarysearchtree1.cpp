#include<iostream>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;

};
Node * insert(Node * root , int n)
{
    if(root == NULL)
    {
        Node * newNode = new Node();
        newNode->data = n;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    if(n < root->data)
    {
        root->left = insert(root->left, n);
    }
    else if(n > root->data)
    {
        root->right = insert(root->right, n);
    }
    return root;
}
void inorder(Node * root)
{
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
bool search(Node * root , int key)
{
    if(root == NULL)
    return false;
    if(root->data == key)
    {
        return true;
    }
    if(key < root->data)
    {
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}
int main()
{
    Node * root = NULL;
    root = insert(root, 40);
    insert(root, 30);
    insert(root, 20);
    insert(root, 10);
    insert(root, 12);
    inorder(root);
    cout<<endl;
    if(search(root, 12))
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
}