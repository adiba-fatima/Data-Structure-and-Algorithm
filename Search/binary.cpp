#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int target)
{
    int left =0;
    int right = n-1;
    while (left<=right)
    {
        int mid = left + (right-left)/2;
        if(arr[mid]==target)
        {
            return mid; //found
        }
        //right search
       else if(arr[mid]<target)
       left = mid+1;
       else
       right = mid -1;
    }
    return -1; //not found
}
int main()
{
 int n, target;
 cout<< "Number of elements: ";
 cin>>n;
 int arr[n];
 cout <<"Values: ";
 for(int i=0; i<n; i++)
{
cin>>arr[i];
}
cout <<"Value to search: ";
cin>> target;
cout<<binarysearch(arr, n, target);
}