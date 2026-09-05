#include<iostream>
using namespace std;
struct Node {
    int data;
    Node * next;
   
    Node * create(int x)
    {
        Node * newnode = new Node();
        newnode->data = x;
        newnode->next = NULL;
        
        return newnode;
    }
};
void print(Node * head)
{
    Node * temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node * del(Node * head, int key)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->data == key)
    {
        Node * temp = head;
        head = head->next; 
        delete temp;
        return head;
    }
    Node * curr = head;
    Node * prev = NULL;
    while(curr != NULL && curr->data != key)
    {
         prev = curr;
         curr = curr->next;
         if(curr == NULL)
         {
            return head;
         }
         if(curr->data == key)
         {
             prev->next = curr->next;
             delete curr;
             return head;
         }
    }
    


}




int main()
{
    int key = 2;
    Node * head = new Node;
    head->data = 1;
    Node * second = new Node;
    second->data = 2;
    Node * third = new Node;
    third->data = 3;
    head->next = second;
    second->next = third;
    third->next = NULL;
     head =  del(head, key);
    print(head);
    return 0;
}