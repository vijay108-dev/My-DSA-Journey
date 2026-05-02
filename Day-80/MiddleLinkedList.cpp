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
    int count = 0;
    Node *temp = head;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    count = count / 2;
    temp = head;
    while(count--)
    {
        temp = temp->next;
    }
    return temp;
}

int main()
{
    int arr[] ={10,20,30,40,50};
    Node *head =CreateLinkedList(arr,0,5);
    Node *middle =MiddleNode(head);
    cout<<middle->data;

    return 0;
}