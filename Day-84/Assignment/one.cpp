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
void Traverse(Node *head){

    if(head==NULL)
        return;

    Node *temp=head;

    do{
        cout<<temp->data<<" ";
        temp = temp->next;

    }while(temp!=head);
}
int main(){

    int arr[] = {1,2,3,4,5,6};
    Node *head = new Node(arr[0]);
    Node *temp = head;
    for(int i=1;i<6;i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    // circular linked list
    temp->next=head;
    Traverse(head);

    return 0;
}
//TC = O(n)
//SC = O(1)