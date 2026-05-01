#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    //Now i will make a constructor
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *CreateLinkedList(int arr[],int index,int size)
{
    // Base Case
    if(index==size)
    return NULL;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr,index+1,size);

    return temp;
}

// Delete a node with the help of Singly Linked List with the help of Recursion
Node *deleteNode(Node *curr,int x)
{
    if(x==1)
    {
        Node *temp = curr->next;
        delete curr;
        return temp;
    }
    curr->next = deleteNode(curr->next,x-1);
    return curr;
}

int main()
{
    Node *Head;
    Head = NULL;

    int arr[]={1,2,3,4,5};

    Head = CreateLinkedList(arr,0,5);

    // delete node
    Head = deleteNode(Head,3);

    //Print the value
    Node *temp = Head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next; 
    }

    return 0;
}