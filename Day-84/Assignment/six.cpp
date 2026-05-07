#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

int main(){
    int arr[] = {1,2,3,4,5,6};
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for(int i=1;i<6;i++){
        Node *newNode = new Node(arr[i]);
        temp->next = newNode;
        newNode->prev = temp;
        temp = newNode;
    }

    // Circular Linked list
    temp->next = head;
    head->prev = temp;

    // Print
    Node *curr = head;
    do{
        cout<<curr->data<<" ";
        curr = curr->next;

    }while(curr != head);

    return 0;
}
//TC = O(N)
//SC = O(1)