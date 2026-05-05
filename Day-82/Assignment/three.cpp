#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};
Node* reverseDLL(Node* head){

    Node* curr =head;
    Node* temp =NULL;

    while(curr){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        curr = curr->prev;
    }
    if(temp!=NULL)
        head=temp->prev;

    return head;
}

void Print(Node* head){

    while(head){
        cout<<head->data << " ";
        head= head->next;
    }
}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    head->next =second;
    second->prev =head;
    second->next= third;
    third->prev= second;
    head=reverseDLL(head);
    Print(head);

    return 0;
}