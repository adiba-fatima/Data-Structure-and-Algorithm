#include <iostream>
using namespace std;
#define MAX 100
class stack
{
    int arr[MAX];
    int top;
    public:
    stack() //constructor
    {
        top =-1;
    }
void push(int val)
{
 if(top == MAX-1)
 {
    cout<<"Stack overflow ";
    return;
 }
 else{
    arr[++top] =val;
    //cout<<val<<" Pushed into stack \n"; //not necessary
 }
}
void pop()
{
 if(top<0)
 {
    cout<<"Stack Underflow ";
    return;
 }
 //cout<<arr[top--]<<" Popped \n"; //unnecessary
 top--;
}
int peek()
{
if(top<0)
{cout<<"Stack empty \n";
return -1;}
return arr[top];
}
bool empty()
{
return (top<0);
}
};
int main()
{
stack s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);

while(!s.empty())
{
    cout<<s.peek() <<" ";
s.pop();
}
}