#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Number of elements: ";
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int data, pos, newvalue;
    cout<<"Data: ";
    cin>> data;
    cout<<"Value: ";
    cin>>newvalue;
    for(pos=0; pos<n;pos++)
    {
        if(arr[pos]==data)
        {
            break;
        }
    }
    for(int i=n-1; i>=pos; i--) 
    {
        arr[i]=arr[i-1];
        // before given position, Shift elements to the right to make space for the new value
        //arr[i+1]=arr[i];
        //after given position, shift elements to the right
    }
    arr[pos]=newvalue;
    n++;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}