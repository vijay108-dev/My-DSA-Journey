#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
Node* ReversePart(Node* start , int left , int right)
{
    if(start==NULL || left==right)
    return start;

    Node* temp = start;
    Node* before = NULL;
    int pos = 1;
    while(pos<left)
    {
        before = temp;
        temp = temp->next;
        pos++;
    }

    Node* first = temp;
    Node* prev = NULL;
    Node* ahead = NULL;
    while(pos<=right)
    {
        ahead = temp->next;
        temp->next = prev;
        prev = temp;
        temp = ahead;
        pos++;
    }
    if(before!=NULL)
    {
        before->next = prev;
    }
    else
    {
        start = prev;
    }
    first->next = temp;
    return start;
}

void Print(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    int a = 2;
    int b = 4;

    Node* ans = ReversePart(head,a,b);
    Print(ans);

    return 0;
}
//TC = O(N)
//SC = O(1)