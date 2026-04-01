#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
void createnode(node* &head, int value)
{
    node* newnode= new node{value, NULL};
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    node* current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = newnode;
}
void insertatbeginning(node* &head, int value)
{
    node* newnode = new node{value,head};
    head = newnode;
}
void traverse(node* head)
{
    node* current = head;
    while(current !=NULL)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
}

int main()
{
    node* head = NULL;
    int n, val,x;
    cout<<"Number of nodes: ";
    cin>>n;
    cout<<"Elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>val;
        createnode(head, val);
    }
    cout<<"Value to insert: ";
    cin>>x;
    cout<<"Befor insert: ";
    traverse(head);
    cout<<"After insert: ";
    insertatbeginning(head,x);
    traverse(head);
}