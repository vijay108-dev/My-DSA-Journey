#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
Node* CreateDLL(int arr[], int index, int size, Node* back) 
{

    // base case
    if(index==size) 
    {
        return NULL;
    }

    // node create
    Node*temp=new Node(arr[index]);

    // prev link
    temp->prev=back;

    // next link (recursion)
    temp->next=CreateDLL(arr, index+1, size, temp);

    return temp;
}
int main() 
{
    Node *head = NULL;

    //Create Doubly Linked List
    int arr[]={1,2,3,4,5};
    //Craete with recurssion
    head = CreateDLL(arr,0,5,NULL);
    
    //Delete at Start
    // if(head!=NULL)
    // {

    //     // If only one node exist
    //     if(head->next==NULL)
    //     {
    //         delete head;
    //         head = NULL;
    //     }
    //     // If more than 1 node exist
    //     else
    //     {
    //     Node *temp = head;
    //     head =head->next;
    //     delete temp;
    //     head->prev = NULL;
    //     }
    // }



    //Delete at End
    // if(head!=NULL)
    // {
    //     // If only one node exist
    //     if(head->next==NULL)
    //     {
    //         delete head;
    //         head = NULL;
    //     }
    //     // More than one Node Exist
    //     else
    //     {
    //         Node *curr = head;
    //         // take him to the last node
    //         while(curr->next)
    //         curr = curr->next;

    //         curr->prev->next= NULL;
    //         delete curr;
    //     }
    // }



    //Delete at given position
    int pos = 3;
    //delete at start
    if(pos==1)
    {
        if(head->next==NULL)
        {
            delete head;
            head = NULL;
        }
        // If more than 1 node exist
        else
        {
        Node *temp = head;
        head =head->next;
        delete temp;
        head->prev = NULL;
        }
    }
    else
    {
        Node *curr = head;
        while(--pos)

        //delete at End
        if(curr->next == NULL)
        {
            curr->prev->next= NULL;
            delete curr;
        }
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;

        }
        //delete at middle
    }

    Node *trav = head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
    }
   

    return 0;
}