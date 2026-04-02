//Enqueue and Dequeue
#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node( int val)
    {
        data = val;
        next = NULL;
    }
};
class queue
{
    node* head;
    node* tail;
    public:
    queue()
    {
        head=tail=NULL;
    }
    void push(int data)
    {
        node* newnode = new node(data);
        if(empty())
        {
            head=tail=newnode;
        }
        else{
            tail->next = newnode;
            tail= newnode;
        }
    }
    void pop()
    {
        if(empty())
        {
            cout<<"Empty";
            return;
        }
        else{
            node* temp=head;
            head=head->next;
            delete temp;
        }
    }
    int front()
    {
        if(empty())
        {
            return -1;
        }
        return head->data;
    }
    bool empty()
    {
        return head==NULL;
    }
};
int main()
{
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}