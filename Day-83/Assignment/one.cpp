#include<iostream>
using namespace std;
class Node{
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
    if(size==0)
    return NULL;

    Node *head = new Node(arr[0]);
    Node *temp = head;

    for(int i=1;i<size;i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

//Merge Alternately 
pair<Node*, Node*> mergeList(Node* head1, Node* head2)
{
    Node* curr1 = head1;
    Node* curr2 = head2;

    while(curr1 && curr2)
    {
        Node* next1 = curr1->next;
        Node* next2 = curr2->next;

        // insert curr2 after curr1
        curr1->next = curr2;
        curr2->next = next1;

        // move pointers
        curr1 = next1;
        curr2 = next2;
    }

    // remaining nodes of list2
    head2 = curr2;
    return {head1, head2};
}

void Print(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    int arr1[]= {10,9};
    int arr2[]= {6,1,2,3,4,5};

    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    Node *head1 = CreateLinkedList(arr1, size1);
    Node *head2 = CreateLinkedList(arr2, size2);

    cout<<"List1: ";
    Print(head1);

    cout<<"List2: ";
    Print(head2);

    pair<Node*, Node*> result = mergeList(head1, head2);

    cout<<"Merged List1: ";
    Print(result.first);

    cout<<"Remaining List2: ";
    Print(result.second);

    return 0;
}
// TC: O(n + m)
// SC: O(1) (in-place)