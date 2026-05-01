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
int main()
{
    Node *Head;
    Head = NULL;

    int arr[]={1,2,3,4,5};

    Head = CreateLinkedList(arr,0,5);

    if(Head!=NULL)
    {
        //Only one node is persent
        if(Head->next==NULL)
        {
            Node *temp = Head;
            delete temp;
            Head = NULL;
        }
        // More than one Node is persent
        else
        {
            Node *curr = Head;
            Node *prev = NULL;

            // curr->next is not Null
            while(curr->next!=NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            delete curr;
        }

    }

   //Print the value
   Node *temp = Head;
   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp = temp->next; 
   }
    return 0;
}