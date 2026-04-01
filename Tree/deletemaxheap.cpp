#include <iostream>
#include <vector>
using namespace std;
vector <int> A(100);
int n;
void createheap()
{
    int i,left,right,large;
    i=n/2;
    while(i>=1)
    {
        int k=i;
        while(true)
        {
            left=2*k;
            right=2*k+1;
            large =k;
            if(left<=n && A[large]<A[left])
            {
                large =left;
            }
            if(right<=n && A[large]<A[right])
            {
                large = right;
            }
            if(large !=k)
            {
                swap(A[k],A[large]);
                k=large;
            }
            else{break;}

        }
        i--;
    }
}
int deletemax()
{
    if(n<1)
    {
        cout<<"Heap empty"<<endl;
        return -1;
    }
    int maxElement = A[1]; //root max
    A[1]=A[n]; //move last element to root
    n--; //reduce heap size
    //heapify root again
    createheap();
    return maxElement;
}
int main()
{
    cout<<"Number of elements: ";
    cin>>n;
    cout<<"elements: ";
    for(int i=1; i<=n; i++)
    {
        cin>>A[i];
    }
    createheap();
    cout<<"Max heap: ";
    for(int i=1; i<=n; i++)
    {
        cout<<A[i];
    }
    cout<<endl;
    int deleted = deletemax();
    cout<<"Deleted max element: "<<deleted<<endl;
    cout<<"Heap after deletion: ";
    for(int i=1; i<=n; i++)
    {
        cout<<A[i]<<" ";
    }
}