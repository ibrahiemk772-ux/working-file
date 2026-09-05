#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
Node *head = NULL;
Node * insert(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    return head;
}
Node * display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return head;
}
Node * deleteNode(int key)
{
    if(head == NULL)
    {
        return head;
    }
    if(head->data == key)
    {
        Node * temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }
    Node * curr = head;
    while(curr != NULL && curr->data != key){
        curr = curr->next;
        
    }
    if(curr == NULL)
    {
            return head;
    }
    curr->prev->next = curr->next;
    if(curr->prev != NULL)
    {
        curr->next->prev = curr->prev;
    }
        

}

int main()
{
    int key = 20;
    insert(10);
    insert(20);
    insert(30);
    display();
    deleteNode(key);
    display();
    return 0;
}