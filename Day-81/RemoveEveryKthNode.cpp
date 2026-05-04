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

Node* deleteK(Node *head, int k)
{
    Node *curr=head, *prev=NULL;
    int count=1;
    while(curr){
        if(k==count)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
            count = 1;
        }
        else{
            prev = curr;
            curr = curr->next;
            count++;
        }
    }
    return head;
}

void print(Node *head){
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(6);
    head->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next->next = new Node(9);
    head->next->next->next->next->next->next->next->next = new Node(10);

    int k = 3;
    head=deleteK(head,k);
    print(head);

    return 0;
}