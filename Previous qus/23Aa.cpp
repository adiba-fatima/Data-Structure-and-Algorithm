//binary search the data, if not found insert in appropiate pos
#include <iostream>
using namespace std;
int binary(int arr[], int n, int target)
{
    int left=0, right=n-1;
    while(left<=right)
    {
       int mid=left+(right-left)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if (arr[mid]<target)
        {
            left = mid+1;
        }
        else if (arr[mid]>target) {
            right = mid-1;
        }
    }
    return left;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i=low-1;
    for(int j=low;j<high; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}
void quick(int arr[], int low, int high)
{
    if(low<high)
    {
    int pi=partition(arr,low,high);
    quick(arr,low,pi-1);//sort left
    quick(arr,pi+1,high);//sort right
    }
}
int main()
{
    int n,target;
    int arr[100];
    cout<<"Number of elements: ";
    cin>>n;
    cout<<"Elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    quick(arr,0,n-1);
    cout<<"Target: ";
    cin>>target;
    int pos = binary(arr,n,target);
    if(arr[pos]!=target)
    {
    //quick(arr,0,n-1);
    for(int i=n-1; i>=pos; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=target;
    n++;
    }
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
}
