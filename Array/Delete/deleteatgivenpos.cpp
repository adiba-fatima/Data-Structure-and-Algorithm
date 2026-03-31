#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int pos, data;
    cout<<"data to match: ";
    cin>>data;
    for(pos=0; pos<n; pos++)
    {
        if(arr[pos]==data)
        {
            for(int i=pos; i<n; i++)
            {
                arr[i]=arr[i+1];
                // after given position, shift elements to the left
            }
             break;
        }
    }
    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
}