#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node* CreateLinkedList(int arr[], int size){
    if(size==0) 
    return NULL;

    Node *head = new Node(arr[0]);
    Node *temp = head;

    for(int i=1;i<size;i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

// Sort withoutt counting (in-place)
Node* sortList(Node *head)
{
    if(!head || !head->next) 
    return head;

    Node *zeroHead = new Node(-1), *zero = zeroHead;
    Node *oneHead  = new Node(-1), *one  = oneHead;
    Node *twoHead  = new Node(-1), *two  = twoHead;

    Node *curr = head;

    // Step 1: divide into 3 lists
    while(curr)
    {
        if(curr->data == 0)
        {
            zero->next = curr;
            zero = zero->next;
        }
        else if(curr->data == 1)
        {
            one->next = curr;
            one = one->next;
        }
        else
        {
            two->next = curr;
            two = two->next;
        }
        curr = curr->next;
    }

    // Step 2: connect lists
    zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
    one->next = twoHead->next;
    two->next = NULL;

    return zeroHead->next;
}

void Print(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    int arr[]= {1,2,2,1,2,0,2,2};

    int size = sizeof(arr)/sizeof(arr[0]);
    Node *head = CreateLinkedList(arr, size);
    cout<<"Original: ";
    Print(head);

    head = sortList(head);
    cout<<"Sorted: ";
    Print(head);

    return 0;
}

// TC: O(n)
// SC: O(1) (only pointers, no extra data structures)