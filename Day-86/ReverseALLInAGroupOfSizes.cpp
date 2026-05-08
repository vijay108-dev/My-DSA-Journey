#include<iostream>
using namespace std;
class Node
{
public:

    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

Node* ReverseKGroup(Node* head , int k)
{
    if(head==NULL)
    return NULL;

    Node* curr = head;
    Node* prev = NULL;
    Node* front = NULL;
    int x = 0;
    while(curr&& x<k)
    {
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
        x++;
    }

    if(front){
        head->next = ReverseKGroup(front,k);
    }
    return prev;
}

void Print(Node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    Node* first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);
    first->next->next->next = new Node(6);
    first->next->next->next->next = new Node(8);
    first->next->next->next->next->next = new Node(7);
    first->next->next->next->next->next->next = new Node(5);
    first->next->next->next->next->next->next->next = new Node(9);
    first->next->next->next->next->next->next->next->next = new Node(11);
    first->next->next->next->next->next->next->next->next->next = new Node(17);

    int k=4;
    Node* ans=ReverseKGroup(first,k);
    Print(ans);

    return 0;
}
//TC=O(n)
//SC=O(1)