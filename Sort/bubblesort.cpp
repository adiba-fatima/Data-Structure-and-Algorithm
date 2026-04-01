#include <iostream>
//#include <algorithm>
using namespace std;
void bubble(int arr[], int n)
{
for(int i=0; i<n-1; i++)
{
    for(int j=0; j<n-i-1; j++)
    {
        if(arr[j]>arr[j+1])
        {
        swap(arr[j],arr[j+1]);
        }
    }
}
}
int main()
{
    int arr[]={12,42,45,88,24};
    int n=5;
    bubble(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}