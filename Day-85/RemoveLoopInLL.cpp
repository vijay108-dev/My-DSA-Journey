#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class Solution{
public:
    void removeLoop(Node* head) 
    {
        Node* slow = head;
        Node* fast = head;
        // Detect Loop
        while(fast!=NULL && fast->next!=NULL) 
        {

            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) 
            {
                break;
            }
        }
        // No loop found
        if(fast==NULL || fast->next==NULL) 
        {
            return;
        }

        // Move slow to head
        slow = head;
        Node* prev = NULL;

        // Find starting node of loop
        while(slow!=fast) 
        {
            prev = fast;
            slow = slow->next;
            fast = fast->next;
        }
        // Remove loop
        prev->next = NULL;
    }
};

void printList(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Creating loop
    head->next->next->next->next = head->next;
    Solution obj;
    obj.removeLoop(head);
    printList(head);

    return 0;
}
//TC = O(N)
//SC = O(1)