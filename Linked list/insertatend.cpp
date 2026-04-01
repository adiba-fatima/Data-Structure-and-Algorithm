#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* createnode(int val)
{
    node* nptr = new node;
    nptr->data = val;
    nptr->next = NULL;
    return nptr;
}
//insert at end
node* insert(node* head, int val)
{
    node* nptr = createnode(val);
    if(head == NULL)
    {return nptr;} //first node
    node* current = head;
    while(current->next !=NULL)
    {
        current = current->next;
    }
    current->next = nptr;
    return head; //head remains same
}
void traverse(node* head) {
    node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    node* head = NULL;
    int n, v;
    cout << "Number of elements: ";
    cin >> n;
    cout << "Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v;
        head = insert(head, v);   // insert at end
    }
    traverse(head);
}
