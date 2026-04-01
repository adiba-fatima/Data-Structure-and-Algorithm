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
    node* nptr = new node;
    nptr-> data= value;
    nptr->lchild = NULL;
    nptr->rchild = NULL;
    return nptr;
}
node* insertnode(node* root, int value)
{
    if(root==NULL)
    {
        return createnode(value);
    }
    else if(value< root->data)
    {
        root->lchild = insertnode(root->lchild, value);
    }
    else 
    {
        root->rchild = insertnode(root->rchild, value);
    }
    return root;
}
void inorder(node* root)
{
    if(root== NULL)
    return;
    inorder(root->lchild);
    cout<< root->data << " ";
    inorder (root->rchild);
}
node* min(node* root) //find the minimum value in the tree
{
    while(root !=NULL && root->lchild !=NULL)
    root=root->lchild;
    return root;
}
node* deletenode(node* root, int key)
{
    if(root == NULL) //if tree is empty nothing to delete
    return root;
    else if(key<root->data) //if the key is smalller, go left
    {
        root->lchild = deletenode(root->lchild, key);
    }
    else if(key > root->data) //if the key is larger, go right
    {
        root->rchild=deletenode(root->rchild, key);
    }
    //node has no left child
    //if left child is missing, replace node with its right child. delete current node.
    else if(root->lchild == NULL)
        {
            node* temp = root->rchild;
            delete root;
            return temp;
        }
        //node has two child. find inorder successor, copy into current node, delete
    else
    {
        node* temp = min(root-> rchild);
        root->data = temp->data;
        root->rchild = deletenode(root->rchild, temp->data);
    }
    return root;
}
int main()
{
    node* root=NULL;
int n,value,key;
cout<<"Number of node:";
cin>>n;
cout<<"Enter nodes:";
for(int i=0; i<n; i++)
{
    cin>> value;
    root=insertnode(root, value);
}
cout<<"Before delete:";
inorder(root);
cout<<endl;
cout <<"Enter node to be deleted:";
cin>>key;
root = deletenode(root,key);
cout<<"After delete:";
inorder(root);
cout<<endl;
return 0;
}
