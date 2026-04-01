#include <iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
node* createnode (int val)
{
    node* nptr= new node;
    nptr->data = val;
    nptr->left = NULL;
    nptr->right = NULL;
    return nptr;
}
node* insertnode(node* root, int val)
{
    if(root == NULL)
    {
        return createnode(val);
    }
    else if(val<root->data)
    {
        root->left = insertnode(root->left, val);
    }
    else
    {
        root->right = insertnode(root->right, val);
    }
    return root;
}
bool search(node* root, int find) //find = the value to be found
{
    if(!root)
    return false;
    else if(root->data == find)
    return true;
    return find <root->data ? search(root->left,find): search(root->right,find);

}
int main()
{
    node* root= NULL;
    int n, x, value;
    cout<<"Number of elements: ";
    cin>>n;
    cout<<"Enter nodes: ";
    for(int i=0; i<n; i++)
    {
        cin>>x;
        root = insertnode(root, x);
    }
    cout<<"Value to search: ";
    cin>>value;
    cout<< (search(root,value)? "Found":"Not Found");
}