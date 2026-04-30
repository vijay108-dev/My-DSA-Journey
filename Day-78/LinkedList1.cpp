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
int main()
{
    //Node A1(4);
    Node *Head;
    Head = NULL;
    //Head = new Node(4);

    //cout<<Head->data<<endl; //4
    //cout<<Head->next<<endl; //0 cross 0

    int arr [] ={1,2,3,4,5};

    //Insert the Node at beginning

    //Linked List does not exist
    for(int i=0;i<5;i++){
    if(Head==NULL)
    {
        Head = new Node(arr[i]);
    }
    //Linked list exist
    else
    {
        Node *temp;
        temp = new Node(arr[i]);
        temp->next = Head;
        Head = temp;
    }
   }

   //Print the value
   Node *temp = Head;
   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp = temp->next; //5 4 3 2 1 
   }

    return 0;
}