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
void RemoveLoop(Node *head){

    Node *slow = head;
    Node *fast = head;

    // Detect Loop
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        // Loop found
        if(slow==fast)
            break;
    }
    //No Loop
    if(fast==NULL || fast->next==NULL)
        return;
    slow = head;

    // Find starting point of loop
    while(slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    //Remove Loop
    fast->next = NULL;
}

void Print(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node *head = new Node(2);
    Node *second = new Node(3);
    Node *third = new Node(4);
    Node *fourth = new Node(5);
    Node *fifth = new Node(6);
    Node *sixth = new Node(7);
    Node *seventh = new Node(8);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    // Create Loop
    seventh->next = third;
    RemoveLoop(head);
    Print(head);
    return 0;
}
//TC=O(n)
//SC=O(1)