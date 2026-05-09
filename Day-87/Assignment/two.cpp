#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};
Node* findMid(Node *head){
    Node *slow = head;
    Node *fast = head->next;
    while(fast && fast->next)
    {
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
            head1->prev = tail;

            head1 = head1->next;
        }
        else
        {
            tail->next = head2;
            head2->prev = tail;

            head2 = head2->next;
        }
        tail = tail->next;
    }

    if(head1)
    {
        tail->next = head1;
        head1->prev = tail;
    }
    else
    {
        tail->next = head2;

        if(head2)
        {
            head2->prev = tail;
        }
    }

    head = head->next;
    if(head)
    {
        head->prev = NULL;
    }
    return head;
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

    // Split List
    Node *head1 = head;
    Node *head2 = mid->next;

    mid->next = NULL;
    if(head2)
    {
        head2->prev = NULL;
    }

    // Recursive Calls
    head1 = mergeSort(head1);
    head2 = mergeSort(head2);

    // Merge
    return merge(head1, head2);
}

void printForward(Node *head)
{
    Node *temp = head;
    while(temp)
    {
        cout<<temp->data;
        if(temp->next)
        {
            cout<<" <-> ";
        }
        if(temp->next==NULL)
        {
            break;
        }
        temp = temp->next;
    }
    cout<<endl;
}
void printBackward(Node *head)
{
    Node *temp = head;
    while(temp->next)
    {
        temp = temp->next;
    }
    while(temp)
    {
        cout<<temp->data;
        if(temp->prev)
        {
            cout<< " <-> ";
        }
        temp = temp->prev;
    }
    cout<<endl;
}

int main()
{
    Node *head = new Node(7);

    head->next = new Node(3);
    head->next->prev = head;

    head->next->next = new Node(5);
    head->next->next->prev = head->next;

    head->next->next->next = new Node(2);
    head->next->next->next->prev = head->next->next;

    head->next->next->next->next = new Node(6);
    head->next->next->next->next->prev = head->next->next->next;

    head->next->next->next->next->next = new Node(4);
    head->next->next->next->next->next->prev = head->next->next->next->next;

    head->next->next->next->next->next->next = new Node(1);
    head->next->next->next->next->next->next->prev = head->next->next->next->next->next;

    head->next->next->next->next->next->next->next = new Node(8);

    head->next->next->next->next->next->next->next->prev = head->next->next->next->next->next->next;

    cout<<"Original Doubly Linked List:\n";
    printForward(head);

    head = mergeSort(head);
    cout<<"\nSorted Forward:\n";
    printForward(head);

    cout<<"\nSorted Backward:\n";
    printBackward(head);

    return 0;
}
//Time Complexity = O(N log N)
//Space Complexity = O(log N)(recursion stack)