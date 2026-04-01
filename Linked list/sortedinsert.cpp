#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* createnode(int val)
{
    node* nptr = new node;
    nptr->data = val;
    nptr->next = NULL;
    return nptr;
}
node* insertsorted(node* head, int val)
{
    node* nptr = createnode(val);
    if(head == NULL || val<head->data) //insert beginning
    {
        nptr->next = head;
        return nptr;
    }
    //traverse to find pos
    node* current = head;
    while (current->next !=NULL && current->next->data<val)
    {
        current = current->next;
    }
    //insert node
    nptr->next = current->next;
    current->next = nptr;
    return head;
}
void traverse(node* head)
{
    node* current = head;
    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
    cout<<endl;
}
int main()
{
    node* head =NULL;
    int n,v,data;
    cout<<"Number of nodes: ";
    cin>>n;
    cout<<"nodes: ";
    for(int i=0; i<n; i++)
    {
        cin>>v;
        head = insertsorted(head,v);
    }
    cout<<"Before: ";
    traverse (head);
    cout<<"value: ";
    int val;
    cin>>val;
    head = insertsorted(head, val);
    cout<<"After: ";
    traverse(head);
}