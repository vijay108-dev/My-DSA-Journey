#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
int main(){

    Node* head = NULL;

    // ---------------- INSERT AT START ----------------

    // Linked List does not exist
    if(head == NULL) {
        head = new Node(5);
    }
    // Already exist
    else {
        Node* temp = new Node(5);

        temp->next = head;
        head->prev = temp;

        head = temp;
    }

    // ---------------- INSERT AT END ----------------

    Node* temp1 = new Node(10);

    // If list empty
    if(head == NULL) {
        head = temp1;
    }
    else {

        Node* curr = head;

        // Last node tak jao
        while(curr->next != NULL) {
            curr = curr->next;
        }

        curr->next = temp1;
        temp1->prev = curr;
    }

    // ---------------- INSERT AT ANY POSITION ----------------

    int pos = 1;   // position
    int val = 20;

    // Insert at start
    if(pos == 0) {

        Node* temp = new Node(val);

        temp->next = head;

        if(head != NULL)
            head->prev = temp;

        head = temp;
    }
    else {

        Node* curr = head;

        // Previous node tak jao
        while(--pos) {
            curr = curr->next;
        }

        Node* temp = new Node(val);

        // Insert at end
        if(curr->next == NULL) {

            curr->next = temp;
            temp->prev = curr;
        }

        // Insert at middle
        else {

            temp->next = curr->next;
            temp->prev = curr;

            curr->next->prev = temp;
            curr->next = temp;
        }
    }

    // ---------------- PRINT ----------------

    Node* trav=head;
    while(trav){
        cout<<trav->data << " ";
        trav=trav->next;
    }

    return 0;
}