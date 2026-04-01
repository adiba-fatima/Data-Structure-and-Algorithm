#include <iostream>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; //last element as pivot
    int i=low-1; //keeps track of the boundary between smaller than pivot and larger than pivot
    for(int j=low; j<high; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap (arr[i+1], arr[high]);
    return i+1; //where the pivot ends
}
void quick(int arr[], int low, int high)
{
    if(low<high)
    {
        int pi=partition(arr, low, high);
        quick(arr, low, pi-1);//sort left side
        quick(arr,pi+1,high); //sort right side
    }
}
int main()
{
    int arr[]={12,32,43,53,56};
    int n=5;
    quick(arr,0, n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}