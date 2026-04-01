#include <iostream>
#include <vector>
using namespace std;
vector<int>A(100);
int n;
void createminheap()
{
    int i, left,right,small,temp;
    i=n/2;
    while(i>=1)
    {
        int k=i;
        while(true)
        {
            left = 2*k;
            right = 2*k+1;
            small =k;
            //parent must be smaller than child
            if(left<=n && A[small]>A[left])
            {
                small =left;
            }
            if(right<=n && A[small]>A[right])
            {
                small = right;
            }
            if(small !=k)
            {
                swap(A[k],A[small]);
                k=small;
            }
            else
            {
                break;
            }
        }
        i--;
    }
}
int main()
{
    cout<<"Number of element: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=1; i<=n; i++)
    {
        cin>>A[i];
    }
    createminheap();
    cout<<"Min Heap: ";
    for(int i=1; i<=n; i++)
    {
        cout<<A[i]<<" ";
    }
}