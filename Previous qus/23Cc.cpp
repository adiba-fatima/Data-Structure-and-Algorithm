#include <iostream>
using namespace std;
int partition(int arr[], int low,int high)
{
    int pivot = arr[high];
    int i=low-1;
    for(int j=low; j<high; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quick(int arr[], int low, int high)
{
    if(low<high)
    {
    int pi = partition(arr,low,high);
    quick(arr,low,pi-1);
    quick(arr,pi+1,high);
    }
}
int main()
{
    int arr[]={12,4,3,2,53,23};
    int n= sizeof(arr)/sizeof(arr[0]);
    quick(arr,0,n-1);
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}