// #include<iostream>
// #include<vector>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data =value;
//         next =NULL;
//     }
// };
// Node *CreateLinkedList(int arr[], int index, int size)
// {
//     if(index==size)
//     return NULL;

//     Node *temp = new Node(arr[index]);
//     temp->next = CreateLinkedList(arr, index + 1, size);
//     return temp;
// }

// Node* ReverseLinkedList(Node *head)
// {
//     vector<int>ans;
//     Node *temp = head;
//     while(temp!=NULL)
//     {
//         ans.push_back(temp->data);
//         temp = temp->next;
//     }

//     int i = ans.size()-1;
//     temp = head;
//     while(temp)
//     {
//         temp->data = ans[i];
//         i--;
//         temp = temp->next;
//     }

//     return head;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     Node *Head = CreateLinkedList(arr,0,5);
//     Head = ReverseLinkedList(Head);
//     Node *temp = Head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }

//     return 0;
// }

                                  // METHOD = 2
// #include<iostream>
// #include<vector>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node *next;

//     Node(int value)
//     {
//         data =value;
//         next =NULL;
//     }
// };
// Node *CreateLinkedList(int arr[], int index, int size)
// {
//     if(index==size)
//     return NULL;
//     Node *temp = new Node(arr[index]);
//     temp->next = CreateLinkedList(arr, index+1, size);
//     return temp;
// }
// Node* ReverseLinkedList(Node *head)
// {
//     vector<int> ans;
//     Node *temp = head;
//     while(temp!=NULL)
//     {
//         ans.push_back(temp->data);
//         temp = temp->next;
//     }
//     int i = ans.size()-1;
//     temp = head;
//     while(temp)
//     {
//         temp->data=ans[i];
//         i--;
//         temp=temp->next;
//     }
//     return head;
// }

// int main(){
//     int arr[] ={1,2,3,4,5};

//     Node *Head=CreateLinkedList(arr,0,5);
//     Head = ReverseLinkedList(Head);
//     Node *temp = Head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }

//     return 0;
// }

                                           // METHOD = 3
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data =value;
        next =NULL;
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

Node* Reverse(Node *curr, Node *prev)
{
    if(curr==NULL)
    return prev;
    Node *fut=curr->next;
    curr->next = prev;
    return Reverse(fut, curr);
}
int main()
{
    int arr[] = {1,2,3,4,5};
    Node *head = CreateLinkedList(arr,0,5);
    head = Reverse(head, NULL);
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}                                           