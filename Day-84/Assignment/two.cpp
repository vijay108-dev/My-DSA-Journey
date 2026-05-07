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
bool CheckCircular(Node *head){

    if(head==NULL)
        return false;

    Node *temp = head->next;
    while(temp!=NULL && temp!=head)
    {
        temp = temp->next;
    }
    if(temp==head)
        return true;

    return false;
}

int main(){

    int arr[] = {1,2,3,4};
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for(int i=1;i<4;i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    temp->next = head;
    if(CheckCircular(head))
        cout<<"Circular Linked List"<<endl;
    else
        cout<<"Not Circular Linked List"<<endl;

    return 0;
}