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

     //Print the value
   Node *temp = Head;
   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp = temp->next; 
   }
    return 0;
}
//TC =O(n)
//Total SC = O(n)