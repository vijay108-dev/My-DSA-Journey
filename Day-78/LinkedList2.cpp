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
    Node *Head, *Tail;
    Tail =Head = NULL;

    int arr[]={1,2,3,4,5};
    // Insert the value at end

    for(int i=0;i<5;i++)
    {
    //Linked list is empty
    if(Head==NULL)
    {
        Head = new Node(arr[i]);
        Tail = Head;
      
    }
    //When Linked List exist
    else
    {
       Tail->next = new Node(arr[i]);
       Tail = Tail->next;
    }
  }

  Node *temp;
  temp = Head;

  while(temp)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
    return 0;
}