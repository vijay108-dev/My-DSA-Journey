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
Node* findMid(Node *head){
    Node *slow = head;
    Node *fast = head->next;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node *head1, Node *head2){
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

Node* mergeSort(Node *head)
{
    // Base Case
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    // Find Mid
    Node *mid = findMid(head);

    // Split Linked List
    Node *head1 = head;
    Node *head2 = mid->next;
    mid->next = NULL;

    // Recursive Calls
    head1 = mergeSort(head1);
    head2 = mergeSort(head2);

    // Merge Two Sorted Lists
    return merge(head1, head2);
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

int main()
{
    Node *head = new Node(40);
    head->next = new Node(20);
    head->next->next = new Node(60);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(30);

    cout<<"Original Linked List:"<<endl;
    printList(head);

    head = mergeSort(head);
    cout<<"Sorted Linked List:"<<endl;
    printList(head);

    return 0;
}
//Time Complexity = O(N log N)
//Space Complexity = O(log N)(recursion stack)