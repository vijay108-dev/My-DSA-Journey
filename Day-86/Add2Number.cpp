#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
Node* Reverse(Node* curr , Node* prev)
{
    if(curr == NULL)
    return prev;

    Node* front = curr->next;
    curr->next = prev;
    return Reverse(front,curr);
}

Node* Add(Node* first , Node* second)
{
    first = Reverse(first , NULL);
    second = Reverse(second , NULL);
    Node *curr1=first , *curr2=second;

    Node *head = new Node(0);
    int carry = 0;
    Node *tail = head;
    while(curr1 && curr2)
    {
        int sum = curr1->data + curr2->data + carry;
        tail->next = new Node(sum % 10);
        tail = tail->next;
        curr1 = curr1->next;
        curr2 = curr2->next;
        carry = sum / 10;
    }
    while(curr1)
    {
        int sum = curr1->data + carry;
        tail->next = new Node(sum % 10);
        tail = tail->next;
        curr1 = curr1->next;
        carry = sum / 10;
    }
    while(curr2)
    {
        int sum = curr2->data + carry;
        tail->next = new Node(sum % 10);
        tail = tail->next;
        curr2 = curr2->next;
        carry = sum / 10;
    }
    while(carry)
    {
        tail->next = new Node(carry % 10);
        tail = tail->next;
        carry /= 10;
    }

    head = Reverse(head->next , NULL);
    return head;
}

void Print(Node* head)
{

    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main()
{
    Node* first = new Node(9);
    first->next = new Node(7);
    first->next->next = new Node(6);
    first->next->next->next = new Node(8);
     first->next->next->next->next = new Node(4);
    Node* second = new Node(6);
    second->next = new Node(4);
    second->next->next = new Node(3);
    second->next->next->next = new Node(8);
    Node* ans = Add(first , second);
    Print(ans);

    return 0;
}
//TC = O(n+m)
//SC = O(max(n,m))