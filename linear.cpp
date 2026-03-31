#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,6,9,28};
    int val,pos=-1;
    cout<<"Value: ";
    cin>>val;
    for (int i=0; i<5; i++)
    {
        if(arr[i]==val)
        {
            pos = i;
            break;
        }
    }
    if(pos !=-1)
    {
        cout<< "element found at index "<<pos<< endl;
    }
    else
    cout <<"Not found" <<endl;
}