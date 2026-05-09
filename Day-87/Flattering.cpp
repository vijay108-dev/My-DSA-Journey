#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node *bottom;
    Node(int value){
        data = value;
        next = NULL;
        bottom = NULL;
    }
};
Node* merge(Node* head1, Node* head2){
    Node *head = new Node(0);
    Node *tail = head;
    while(head1 && head2){
        if(head1->data <= head2->data)
        {
            tail->bottom = head1;
            head1 = head1->bottom;
            tail = tail->bottom;
            tail->bottom = NULL;
        }
        else
        {
            tail->bottom = head2;
            head2 = head2->bottom;
            tail = tail->bottom;
            tail->bottom = NULL;
        }
    }
    if(head1)
    {
        tail->bottom = head1;
    }
    else
    {
        tail->bottom = head2;
    }
    return head->bottom;
}

Node* flatten(Node *root)
{
    Node *head1, *head2, *head3;
    while(root->next)
    {
        head1 = root;
        head2 = root->next;
        head3 = root->next->next;

        head1->next = NULL;
        head2->next = NULL;

        root = merge(head1, head2);
        root->next = head3;
    }
    return root;
}

void printList(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head = head->bottom;
    }
    cout<<endl;
}
int main(){
    // First linked list
    Node *head = new Node(5);
    head->bottom = new Node(7);
    head->bottom->bottom = new Node(8);
    head->bottom->bottom->bottom = new Node(30);

    // Second linked list
    head->next = new Node(10);
    head->next->bottom = new Node(20);

    // Third linked list
    head->next->next = new Node(19);
    head->next->next->bottom = new Node(22);
    head->next->next->bottom->bottom = new Node(50);

    // Fourth linked list
    head->next->next->next = new Node(28);
    head->next->next->next->bottom = new Node(35);
    head->next->next->next->bottom->bottom = new Node(40);
    head->next->next->next->bottom->bottom->bottom = new Node(45);

    // Fifth linked list
    head->next->next->next->next = new Node(30);
    head->next->next->next->next->bottom = new Node(34);
    head->next->next->next->next->bottom->bottom = new Node(40);

    Node *result=flatten(head);
    cout<<"Flatten Linked List:"<<endl;
    printList(result);

    return 0;
}
//Time Complexity = O(N * K)
//Space Complexity = O(1)