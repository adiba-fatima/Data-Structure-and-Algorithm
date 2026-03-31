#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[100];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int value;
    cout<<"Enter value:";
    cin>>value;
    /*for(int i=n-1; i>=0; i--) //no need to shift elements to right as we are inserting at end just assign value to arr[n] as n is the index of next element and start from i=1 is n should be const
    {
        arr[i+1]=arr[i];
    }*/
    arr[n]=value;
    //n++;
    for(int i=1; i<n+1;i++)
    {
        cout <<arr[i]<<" ";
    }
}