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
Node* reverseList(Node *head){
    Node *curr = head;
    Node *prev = NULL;
    Node *nextNode;
    while(curr){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

void reorderList(Node *head){
    // Base Case
    if(head==NULL || head->next==NULL)
    {
        return;
    }

    // Find Middle
    Node *slow = head;
    Node *fast = head->next;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    // Split List
    Node *head1 = head;
    Node *head2 = slow->next;
    slow->next = NULL;

    // Reverse Second Half
    head2 = reverseList(head2);

    // Merge Both Halves
    Node *temp1;
    Node *temp2;

    while(head1 && head2){
        temp1 = head1->next;
        temp2 = head2->next;
        head1->next = head2;
        head2->next = temp1;
        head1 = temp1;
        head2 = temp2;
    }
}
void printList(Node *head)
{
    while(head){
        cout<<head->data;

        if(head->next)
        {
            cout<<" -> ";
        }
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout<<"Original Linked List:"<<endl;
    printList(head);

    reorderList(head);
    cout<<"Reordered Linked List:"<<endl;
    printList(head);

    return 0;
}
//Time Complexity = O(N)
//Space Complexity = O(1)