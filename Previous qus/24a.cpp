#include <iostream>
using namespace std;
void insert(int arr[], int &n, int value, int pos)
{
    for(int i=n-1; i>=0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=value;
    n++;
}
int main()
{
    int n,val,pos;
    cout<<"Number of elements: ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter value: ";
    cin>>val;
    cout<<"Position: ";
    cin>>pos;
    insert(arr,n,val,pos);
    for(int i=1; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}