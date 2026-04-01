#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* createnode (int val)
{
    node* nptr = new node;
    nptr->data = val;
    nptr->next = NULL;
    return nptr; 
}
node* insertatend(node* head, int val)
{
    node* nptr = createnode(val);
    if(head == NULL)
    {return nptr;} //first node
    node* current = head;
    while(current->next !=NULL)
    {
        current = current->next;
    }
    current->next = nptr;
    return head; //head remains same
}
node* insertatgivenpos(node* head, int val, int pos)
{
    node* nptr = createnode(val);
    //beginning
    if(pos == 1 )
    {
        nptr->next = head;
        return nptr;
    }
    //before pos
    node* current = head;
    for(int i=1; current!=NULL && i<pos-1; i++)
    {
        current = current->next;
    }
    nptr->next = current->next;
    current->next = nptr;
    return head;
}
void traverse(node* head)
{
    node* current = head;
    while (current != NULL)
    {
        cout<< current->data <<" ";
        current = current->next;
    }
}
int main()
{
    node* head = NULL;
    int n,v,pos,x;
    cout<<"Number of elements: ";
    cin>>n;
    cout<<"Elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>v;
        head = insertatend(head,v);
    }
    cout<<"Before: ";
    traverse(head);
    cout<<"value to insert: ";
    cin>>x;
    cout<<"position to insert: ";
    cin>>pos;
    head = insertatgivenpos(head,x,pos);
    cout<<"After: ";
    traverse(head);

}