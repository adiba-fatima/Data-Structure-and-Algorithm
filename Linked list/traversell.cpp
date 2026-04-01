#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
void traverse(node* head)
{
    node* curr=head;
    while(curr!= NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next; //move to next
    }
}
int main()
{
    node* head = new node{1,NULL};
    node* second = new node{2,NULL};
    node* third = new node{3,NULL};
    head->next=second;
    second->next = third;
    traverse(head);
}