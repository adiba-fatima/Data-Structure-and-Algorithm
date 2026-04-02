#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* insertend(node* &head, int value)
{
    node* newnode = new node();
    newnode->data=value;
    newnode->next=NULL;
    if(head == NULL)
    {
        head = newnode;
        return head;
    }
    node* temp = head;
    while(temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next = newnode;
    return head;
}
node* move(node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    int value = head->data;
    node* temp = head;
    head = head->next;
    delete temp;
    insertend(head, value);
    return head;
}
void print(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<"Null";
}
int main()
{
    node* head = NULL;
    int n,x;
    cout<<"Number of nodes: ";
    cin>>n;
    cout<<"Nodes: ";
    for(int i=0; i<n; i++)
    {
        cin>>x;
        head = insertend(head,x);
    }
    cout<<"befor delete: ";
    print(head);
    head=move(head);
    cout<<"After move: ";
    print(head);
}