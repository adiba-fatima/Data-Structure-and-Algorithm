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
        //cout<<"Enter elements:";
        cin>> arr[i];
    }
    for(int i=0; i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
}
