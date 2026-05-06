// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node *next;
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };

// Node* CreateLinkedList(int arr[], int size){
//     if(size==0){
//         return NULL;
//     }

//     Node *head=new Node(arr[0]);
//     Node *temp= head;

//     for(int i=1;i<size;i++){
//         temp->next = new Node(arr[i]);
//         temp = temp->next;
//     }
//     return head;
// }

// Node* MergeList(Node *head1, Node *head2)
// {
//     Node *head = new Node(0);
//     Node *tail = head;

//     while(head1 && head2)
//     {
//         if(head1->data <= head2->data)
//         {
//             tail->next = head1;
//             head1 = head1->next;
//             tail = tail->next;
//         }
//         else
//         {
//             tail->next = head2;
//             head2 = head2->next;
//             tail = tail->next;
//         }
//     }

//     // Remaining Nodes
//     if(head1)
//     {
//         tail->next = head1;
//     }

//     if(head2)
//     {
//         tail->next = head2;
//     }
//     return head->next;
// }

// void Print(Node *head)
// {
//     Node *temp = head;
//     while(temp)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int main(){
//     int arr1[] = {2, 4, 5, 7};
//     int arr2[] = {3, 4, 4, 6, 8, 10};

//     int size1 = sizeof(arr1) / sizeof(arr1[0]);
//     int size2 = sizeof(arr2) / sizeof(arr2[0]);

//     Node *head1 = CreateLinkedList(arr1, size1);
//     Node *head2 = CreateLinkedList(arr2, size2);

//     Node *head = MergeList(head1, head2);
//     Print(head);

//     return 0;
// }
// TC = O(n+m)
// SC =  O(1)


#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
Node* CreateLinkedList(int arr[], int size){
    if(size == 0){
        return NULL;
    }

    Node *head = new Node(arr[0]);
    Node *temp = head;

    for(int i=1;i<size;i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

Node* MergeList(Node *head1, Node *head2)
{
    // If one list is empty
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }

    Node *head = new Node(0);
    Node *tail = head;
    while(head1 && head2)
    {
        if(head1->data <= head2->data)
        {
            tail->next = head1;
            head1 = head1->next;
            tail = tail->next;
            tail->next = NULL;
        }
        else
        {
            tail->next = head2;
            head2 = head2->next;
            tail = tail->next;
            tail->next = NULL;
        }
    }

    // Remaining Nodes
    if(head1)
    {
        tail->next = head1;
    }
    else
    {
        tail->next = head2;
    }
    return head->next;
}

void Print(Node *head)
{
    Node *temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    int arr1[] = {1,2,3};
    int arr2[] = {3,4,5};

    int size1 = sizeof(arr1) /sizeof(arr1[0]);
    int size2 = sizeof(arr2) /sizeof(arr2[0]);

    Node *head1 = CreateLinkedList(arr1, size1);
    Node *head2 = CreateLinkedList(arr2, size2);

    Node *head = MergeList(head1, head2);
    Print(head);

    return 0;
}