#include <iostream>
using namespace std;
struct node
{
    int data;
    node* lchild;
    node* rchild;
};
node* createnode(int val)
{
    node* nptr = new node;
    nptr->data = val;
    nptr->lchild = NULL;
    nptr->rchild = NULL;
    return nptr;
}
node* insert(node* root, int val)
{
    if(root == NULL)
    {
        return createnode(val);
    }
    else if(val<root->data)
    {
        root->lchild = insert(root->lchild, val);
    }
    else{
        root->rchild = insert(root->rchild, val);
    }
    return root;
}
void preorder(node* root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->lchild);
        preorder(root->rchild);
    }
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
void postorder(node* root)
{
    if(root!=NULL)
    {
        postorder(root->lchild);
        postorder(root->rchild);
        cout<<root->data <<" ";
    }
}
int main()
{
    node* root =NULL;
    int n, item;
    cout<<"Number of element: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>> item;
        root = insert(root, item);
    }
    cout<<"Preorder: ";
     preorder(root);
    cout<<"Inorder: ";
    inorder(root);
    cout<<"Postorder: ";
    postorder(root);
}