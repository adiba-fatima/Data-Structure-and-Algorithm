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
node* insertend(node* head, int val)
{
    node* nptr = createnode(val);
    if(head == NULL)
    return nptr;
    node* current = head;
    while (current->next !=NULL)
    {
        current = current->next;
    }
    current->next = nptr;
    return head;
}
node* deletebyvalue(node* head, int data)
{
    if(head == NULL)
    {
        return head;
    }
    //delete head node
    if(head->data == data)
    {
        node* temp=head;
        head =head->next;
        delete temp;
        return head;
    }
    //search and delete
    node* current = head;
    while (current->next !=NULL && current->next->data !=data)
    {
        current = current->next;
    }
    if(current->next !=NULL)
    {
        node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }
    return head;
}
void traverse(node* head)
{
    node* current = head;
    while(current !=NULL)
    {
        cout<<current->data <<" ";
        current= current->next;
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
        head = insertend(head,v);
    }
    cout<<"Before delete: ";
    traverse (head);
    cout<<"Data to delete: ";
    cin>>data;
    head = deletebyvalue(head,data);
    cout<<"After delete: ";
    traverse (head);
}
