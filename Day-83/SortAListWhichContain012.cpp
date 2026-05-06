// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node *next;

//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// Node* CreateLinkedList(int arr[], int size){
//     if(size==0)
//     {
//         return NULL;
//     }

//     Node *head = new Node(arr[0]);
//     Node *temp = head;
//     for(int i=1;i<size;i++){
//         temp->next = new Node(arr[i]);
//         temp = temp->next;
//     }

//     return head;
// }

// Node* SortList(Node *head)
// {
//     Node *curr = head;

//     int count0 = 0;
//     int count1 = 0;
//     int count2 = 0;

//     // Count 0, 1 and 2
//     while(curr)
//     {
//         if(curr->data == 0)
//         {
//             count0++;
//         }
//         else if(curr->data == 1)
//         {
//             count1++;
//         }
//         else
//         {
//             count2++;
//         }

//         curr = curr->next;
//     }
//     curr = head;

//     // Fill 0
//     while(count0--)
//     {
//         curr->data = 0;
//         curr = curr->next;
//     }

//     // Fill 1
//     while(count1--)
//     {
//         curr->data = 1;
//         curr = curr->next;
//     }

//     // Fill 2
//     while(count2--)
//     {
//         curr->data = 2;
//         curr = curr->next;
//     }

//     return head;
// }

// void Print(Node *head)
// {
//     Node *temp = head;
//     while(temp)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main(){
//     int arr[]= {1, 2, 0, 1, 2, 0, 1, 2};

//     int size = sizeof(arr)/sizeof(arr[0]);
//     Node *head = CreateLinkedList(arr, size);
//     head = SortList(head);
//     Print(head);

//     return 0;
// }
//TC = O(n)
//SC = O(1)