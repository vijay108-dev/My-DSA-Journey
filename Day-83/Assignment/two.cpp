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

// Rearrange Odd-Even Positions
Node* rearrange(Node* head)
{
    if(!head || !head->next) 
    return head;

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;

    while(even && even->next)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    // connect odd list with even list
    odd->next = evenHead;
    return head;
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
    int arr[]= {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    Node *head = CreateLinkedList(arr, size);

    cout<<"Original: ";
    Print(head);

    head = rearrange(head);
    cout<<"Rearranged: ";
    Print(head);

    return 0;
}

// TC: O(n)
// SC: O(1)