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
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

Node* RotateList(Node *head, int k)
{
    if(head==NULL || head->next==NULL)
    return head;
    int count=1;
    Node *tail=head;
    while(tail->next!=NULL)
    {
        count++;
        tail=tail->next;
    }
    k = k%count;
    if(k==0)
    return head;
    tail->next=head;
    count=count-k;
    Node *temp=head;
    while(count>1)
    {
        temp=temp->next;
        count--;
    }
    head = temp->next;
    temp->next = NULL;
    return head;
}
int main(){
    int arr[] = {10,20,30,40,50};
    Node *head = CreateLinkedList(arr,0,5);
    int k=2;
    head = RotateList(head,k);
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}