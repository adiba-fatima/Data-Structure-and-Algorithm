#include <iostream>
using namespace std;
struct node
{
  int data;
  node* lchild;
  node* rchild;
};
node* createnode(int value)
{
    node* nptr=new node;
    nptr->data = value;
    nptr->lchild = NULL;
    nptr->rchild = NULL;
    return nptr;
}
//insert
node* insert(node* root, int value)
{
    if(root==NULL)
    {
        return createnode(value);
    }
    else if(value < root->data)
    {root->lchild= insert(root->lchild, value);}
    else
    {
        root->rchild = insert(root->rchild, value);
    }
    return root;
}
void inorder(node* root)
{
    if(root!=NULL)
    {
        inorder(root->lchild);
        cout<<root->data<<" ";
        inorder(root->rchild);
    }
}
int main()
{
    node* root=NULL;
    int n,x;
    cout<<"Number of element: ";
    cin>>n;
    cout<<"Nodes: ";
    for(int i=0; i<n; i++)
    {
        cin>> x;
        root = insert(root,x);
    }
    cout<< "Inorder: ";
    inorder(root);
}
