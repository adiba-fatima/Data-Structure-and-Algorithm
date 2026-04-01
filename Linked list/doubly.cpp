#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
    node* prev;
};
node* createnode(int val)
{
    node* nptr = new node;
    nptr->data = val;
    nptr->next =NULL;
    nptr->prev = NULL;
    return nptr;
}
node* insertend(node* head, int val)
{
    node* nptr = createnode(val);
    if(head == NULL)
    return nptr;
    node* current = head;
    while(current->next !=NULL)
    {
        current = current->next;
    }
    current->next =nptr;
    nptr->prev=current;
    return head;
}
void traverseforward(node* head)
{
    cout<<"Forward: ";
    node* current = head;
    while(current !=NULL)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
}
void traverseback(node* head)
{
    if(head == NULL)
    return;
    node* current = head;
    while(current->next !=NULL)
    {
        current = current->next;
    }
    cout<<"backwards: "<<" ";
    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current = current->prev;
    }
    
}
int main()
{
    node* head = NULL;
    int n,v,x;
    cout<<"Number of elements: ";
    cin>>n;
    cout<<"Elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>v;
        head = insertend(head,v);
        
    }
    traverseforward(head);
    traverseback(head);
}