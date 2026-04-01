#include <iostream>
#include <vector>
using namespace std;
vector <int> A(100); //heap array
int n; //number of element
void createheap()
{
    int i, left, right, large, temp;
    i =n/2; //start from last non-leaf node
    while (i>=1)
    {
        int k=i;
        while (true)
        {
            left = 2*k;
            right =2*k+1;
            large = k;
            if(left<= n && A[large]<A[left])
            {
                large = left;
            }
            if(right<=n && A[large]<A[right])
            {
                large = right;
            }
            if(large !=k)
            {
                temp = A[k];
                A[k] = A[large];
                A[large]=temp;
                k=large; //continue heapify
            }
            else{ break;}

        }
        i--;
    }
}
int main()
{
    cout<<"Number of element: ";
    cin>>n;
    cout<<"Enter element: ";
    for(int i=1; i<=n; i++)
    {
        cin>>A[i];
    }
    createheap();
    cout<<"Max heap: ";
    for(int i=1; i<=n; i++)
    {
        cout<<A[i]<<" ";
    }
}