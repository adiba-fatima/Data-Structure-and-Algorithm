#include <iostream>
using namespace std;
void insertsort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int cur, prev;
        cur = arr[i];
        prev = i-1;
        while (prev>=0 && arr[prev]>cur)
        {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = cur;
    }
}
int main()
{
    int n;
    int arr[n];
    cout<<"Number of elements: ";
    cin>>n;
    cout<<"Elements: ";
    for(int i=0; i<n; i++)
    {
    cin>>arr[i];
    }
    insertsort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}