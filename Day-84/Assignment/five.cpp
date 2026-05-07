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

int main(){
    int arr[] = {1,2,3,4,5,6};
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for(int i=1;i<6;i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    // Circular Linked list
    temp->next = head;

    // Print
    Node *curr = head;

    do{
        cout<<curr->data<<" ";
        curr = curr->next;
    }while(curr!=head);
    return 0;
}
//TC = O(N)
//SC = O(1)