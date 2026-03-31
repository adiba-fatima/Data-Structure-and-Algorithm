#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of array: ";
    cin>>n;
    int arr[100];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int value, pos;
    cout<<"Enter value:";
    cin>>value;
    cout<<"Enter position: ";
    cin>> pos;
    for(int i=n-1; i>=pos; i--) //if we don't want to replace the data at pos
    //for(int i=n-1; i>=0; i--) //if we want to replace the data at pos
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=value;
    n++;
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}