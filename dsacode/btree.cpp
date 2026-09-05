#include<iostream>
#include<vector>
using namespace std;
struct Node {
    vector<int> keys;
    vector<Node*> children;
    Node * create (vector<int> k)
    {
        keys = k;
       
    } 
};
void print(Node * root, int level = 0)
{
    if(root == NULL)
    {
        return;
    }
    cout<<"[";
    for(int i = 0 ;i< root->keys.size(); i++)
    {
        cout << root->keys[i] << " ";
    }
    cout<<"]\n";
    for(int i = 0;  i <root->children.size(); i++)
    {
        print(root->children[i], level + 1);
    }
}
int main()
{
    Node * root = new Node;
    root->keys = {10, 20};
    Node * child1 =  new Node;
    child1->keys = {5, 7};
    Node * child2 = new Node;
    child2->keys = {15, 17};
    Node * child3 = new Node;
    child3->keys = {25, 30};
    Node * child4 = new Node;
    child4->keys = {3, 4};
    Node * child5 = new Node;
    child5->keys = {8, 9};


    root->children = {child1, child2, child3, child4, child5};
    print(root);
    return 0;
}