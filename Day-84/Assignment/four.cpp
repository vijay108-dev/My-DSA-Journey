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
Node* SortedInsert(Node *head,int x){

    Node *newNode = new Node(x);
    // Empty List
    if(head == NULL){
        newNode->next = newNode;
        return newNode;
    }

    // Insert at beginning
    if(x<head->data)
    {
        Node *temp = head;
        while(temp->next!=head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node *curr = head;
    while(curr->next!=head && curr->next->data<x)
    {
        curr = curr->next;
    }

    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

void Print(Node *head){
    Node *temp = head;

    do{
        cout<<temp->data<<" ";
        temp = temp->next;

    }while(temp != head);
}
int main(){

    int arr[] = {1,2,4,5};

    Node *head = new Node(arr[0]);
    Node *temp = head;
    for(int i=1;i<4;i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    temp->next = head;
    head = SortedInsert(head,3);
    Print(head);

    return 0;
}
//TC = O(N)
//SC = O(1)