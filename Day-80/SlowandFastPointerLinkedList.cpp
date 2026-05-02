#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
Node *CreateLinkedList(int arr[], int index, int size)
{
    if(index==size)
    return NULL;
    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index+1, size);

    return temp;
}

Node* MiddleNode(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){
    int arr[]={10,20,30,40,50};
    Node *head = CreateLinkedList(arr,0,5);
    Node *middle = MiddleNode(head);
    cout<<middle->data;

    return 0;
}