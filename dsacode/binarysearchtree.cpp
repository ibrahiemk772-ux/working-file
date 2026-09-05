#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * left;
    Node * right; 
};
Node* findMin(Node* root);
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
    if(n< root->data)
    {
        root->left = insert(root->left, n);
    }
    if (n > root->data)
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
    {
        return false;

    }
    if(root->data == key)
    {
        return true;
    }
    if(key < root->data)
    {
      return  search(root->left, key);
    }

    else
    {
        return  search(root->right, key);
    }
    return  false;
}


    if(root == NULL)
       return NULL;
    if(key < root->data)
    {
        root->left = delNode(root->left, key);
    }
   else if(key > root->data)
    {
        root->right = delNode(root->right, key);
    }
    
    // case1
 else{
     if(root->left == NULL && root->right == NULL)
       {
        delete root;
        return NULL;
       }
     if(root->left == NULL)
      {
        Node * temp = root->right;
        delete root;
        return temp;
     }
     if(root->right == NULL)
     {
        Node * temp = root->left;
        delete root;
        return temp; 
     }
     else{
        Node * temp = findMin(root->right);
        root->data = temp->data;
        root->right = delNode(root->right, temp->data);
     }
    }
    return root;

}
Node * findMin(Node * root)
{
    while(root->left != NULL )
    {
        root = root->left;
    }
    return root;
}
Node * delNode(Node * root , int key)
{
    if(root == NULL)
    return NULL;
    if(key < root->data)
     {
   root->left = delNode(root->left, key);


     }
  else if(key>root->data)
     {
    root->right = delNode(root->right, key);
     }
  return root;
 else{
     if(root->left == NULL && root->right == NULL)
     {
        delete root;
        return NULL;
     } 
     else if(root->left == NULL)
     {
        Node * temp = root->right;
         delete root;
        return temp
     }
     else if(root->right == NULL)
      {
        Node * temp = root->left;
        delete root;
        return temp;
      }
     else{
        Node * temp = findMin(root->right);
        root->data = temp->data;
        root ->right = delNode(root->right , temp->data);
     }
  }
  return root;
}
int main()
{
int key = 10;
Node * root = NULL;
root = insert(root, 40);
insert(root, 30);
insert(root, 20);
insert(root, 10);
insert(root, 12);
inorder(root);
search(root, key);
delNode(root, key);
inorder(root);
return 0;

}