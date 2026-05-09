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
// Node* merge(Node* head1, Node* head2){
//     Node *head = new Node(0);
//     Node *tail = head;

//     while(head1 && head2){
//         if(head1->data <= head2->data)
//         {
//             tail->next = head1;
//             head1 = head1->next;
//         }
//         else
//         {
//             tail->next = head2;
//             head2 = head2->next;
//         }

//         tail = tail->next;
//         tail->next = NULL;
//     }
//     if(head1)
//     {
//         tail->next = head1;
//     }
//     else
//     {
//         tail->next = head2;
//     }

//     return head->next;
// }

// Node* mergeKLists(Node* arr[], int k){
//     Node *head = arr[0];
//     for(int i=1;i<k;i++)
//     {
//         head = merge(head, arr[i]);
//     }
//     return head;
// }

// void printList(Node *head)
// {
//     while(head)
//     {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     cout<<endl;
// }

// int main(){
//     int k = 8;
//     Node* arr[k];

//     // List 1: 1 2 4
//     arr[0] = new Node(1);
//     arr[0]->next = new Node(2);
//     arr[0]->next->next = new Node(4);

//     // List 2: 3 6
//     arr[1] = new Node(3);
//     arr[1]->next = new Node(6);

//     // List 3: 4 5 9 10
//     arr[2] = new Node(4);
//     arr[2]->next = new Node(5);
//     arr[2]->next->next = new Node(9);
//     arr[2]->next->next->next = new Node(10);

//     // List 4: 7
//     arr[3] = new Node(7);

//     // List 5: 6 8
//     arr[4] = new Node(6);
//     arr[4]->next = new Node(8);

//     // List 6: 2 7 8 10
//     arr[5] = new Node(2);
//     arr[5]->next = new Node(7);
//     arr[5]->next->next = new Node(8);
//     arr[5]->next->next->next = new Node(10);

//     // List 7:17 19 22
//     arr[6] = new Node(17);
//     arr[6]->next = new Node(19);
//     arr[6]->next->next = new Node(22);

//     // List 8: 4 18
//     arr[7] = new Node(4);
//     arr[7]->next = new Node(18);

//     Node *result = mergeKLists(arr, k);
//     cout<<"Merged Linked List:"<<endl;
//     printList(result);

//     return 0;
// }
//Time Complexity = O(N * K)
//Space Complexity = O(1)


//-------------------------------------------METHOD = 2-----------------------------------------------------
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* merge(Node* head1, Node* head2){
    Node *head = new Node(0);
    Node *tail = head;

    while(head1 && head2){
        if(head1->data <= head2->data)
        {
            tail->next = head1;
            head1 = head1->next;
        }
        else
        {
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
        tail->next = NULL;
    }

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

void mergeSort(Node* arr[], int start, int end){
    if(start >= end){
        return;
    }

    int mid = start+(end-start)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    arr[start] = merge(arr[start],arr[mid+1]);
}
void printList(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    int k = 8;
    Node* arr[k];

    // List 1: 1 2 4
    arr[0] = new Node(1);
    arr[0]->next = new Node(2);
    arr[0]->next->next = new Node(4);

    // List 2: 3 6
    arr[1] = new Node(3);
    arr[1]->next = new Node(6);

    // List 3: 4 5 9 10
    arr[2] = new Node(4);
    arr[2]->next = new Node(5);
    arr[2]->next->next = new Node(9);
    arr[2]->next->next->next = new Node(10);

    // List 4: 7
    arr[3] = new Node(7);

    // List 5: 6 8
    arr[4] = new Node(6);
    arr[4]->next = new Node(8);

    // List 6: 2 7 8 10
    arr[5] = new Node(2);
    arr[5]->next = new Node(7);
    arr[5]->next->next = new Node(8);
    arr[5]->next->next->next = new Node(10);

    // List 7: 17 19 22
    arr[6] = new Node(17);
    arr[6]->next = new Node(19);
    arr[6]->next->next = new Node(22);

    // List 8: 4 18
    arr[7] = new Node(4);
    arr[7]->next = new Node(18);

    mergeSort(arr,0,k-1);
    cout<<"Merged Linked List:"<<endl;
    printList(arr[0]);

    return 0;
}