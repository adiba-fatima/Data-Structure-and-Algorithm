#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Number of elements:";
    cin>>n;
    int arr[100];
    for(int i=0; i<n;i++)
    {
        cin>> arr[i];
    }
    int value;
    cout<<"Enter value:";
    cin>>value;
    for(int i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=value;
    n++;
    for(int i=0; i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}