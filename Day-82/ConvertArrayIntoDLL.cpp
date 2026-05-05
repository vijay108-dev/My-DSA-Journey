// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int val) {
//         data = val;
//         prev = NULL;
//         next = NULL;
//     }
// };
// int main() 
// {
//     // Craete Doubly Linked List
//     Node* head = NULL;
//     Node* tail = NULL;
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     for(int i=0;i<n;i++){

//         // Linked list does not exist
//         if(head == NULL) 
//         {
//             head =new Node(arr[i]);
//             tail =head;
//         }
//         else 
//         //If my Linked List Exist
//         {
//             Node* temp = new Node(arr[i]);
//             tail->next =temp;
//             temp->prev =tail;
//             tail =temp;
//         }
//     }

//     // Print
//      Node *trav = head;
//     while(trav)
//     {
//         cout<<trav->data<<" ";
//         trav = trav->next;
//     }

//     return 0;
// }


//                     METHOD = 2 RECURSSION
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

    // Print
    void display(Node* head)
{
    Node* trav=head;
    while(trav!=NULL){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
    cout<<"NULL"<<endl;
}

int main() 
{
    int arr[]={1,2,3,4,5};
    int size=5;
    Node* head = CreateDLL(arr,0,size,NULL);
    display(head);

    return 0;
}