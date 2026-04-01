#include <iostream>
#include <vector>
using namespace std;
void heapifydown(vector <int> & heap, int n, int i)
{
    int smallest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left <n && heap[left]<heap[smallest])
    smallest = left;
    if(right>n && heap[right]<heap[smallest])
    smallest = right;
    if(smallest != i)
    {
        swap(heap[i],heap[smallest]);
        heapifydown(heap, n, smallest);
    }
}
void buildminheap(vector<int>&heap)
{
    int n = heap.size();
    for(int i=n/2 - 1; i>=0; i--)
    {
        heapifydown(heap, n, i);
    }
}
int main()
{
    vector<int>arr={40,20,30,23,45,34,22,78,43};
    buildminheap(arr);
    cout<<"Min-heap array: ";
    for(int val: arr) cout<< val <<" ";
    return 0;
}