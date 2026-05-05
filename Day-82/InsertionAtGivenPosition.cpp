#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) 
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// Create Doubly Linked List using Array
Node* createList(int arr[], int n)
 {

    if(n == 0)
        return NULL;

    Node* head = new Node(arr[0]);
    Node* curr = head;

    for(int i=1;i<n;i++) 
    {
        Node* temp = new Node(arr[i]);
        curr->next = temp;
        temp->prev = curr;
        curr = temp;
    }

    return head;
}

// Insert at Position
void insertAtPosition(Node* &head, int pos, int val)
 {

    // Insert at Start
    if(pos==0){
        Node* temp = new Node(val);
        temp->next = head;
        if(head!=NULL)
            head->prev = temp;
        head = temp;
        return;
    }

    Node* curr = head;
    // Go to previous node
    while(--pos){
        curr = curr->next;
    }

    // Insert at End
    if(curr->next==NULL){
        Node* temp = new Node(val);
        temp->prev = curr;
        curr->next = temp;
    }

    // Insert at Middle
    else{

        Node* temp = new Node(val);
        temp->next = curr->next;
        temp->prev = curr;
        curr->next->prev = temp;
        curr->next = temp;
    }
}

// Print
void Print(Node* head){
    Node* trav = head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }

    cout<<endl;
}

int main(){
    int arr[]={10,20,30,40};
    int n=4;

    Node* head=createList(arr, n);
    insertAtPosition(head, 1, 5);
    Print(head);

    return 0;
}