#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
class Solution{
public:
    Node* partition(Node* head, int x){
        Node* lessHead = new Node(0);
        Node* equalHead = new Node(0);
        Node* greaterHead = new Node(0);

        Node* less = lessHead;
        Node* equal = equalHead;
        Node* greater = greaterHead;

        Node* temp = head;
        while(temp){
            if(temp->data<x)
            {
                less->next = temp;
                less = less->next;
            }
            else if(temp->data==x)
            {
                equal->next = temp;
                equal = equal->next;
            }
            else
            {
                greater->next = temp;
                greater = greater->next;
            }
            temp = temp->next;
        }

        // Important
        greater->next = NULL;

        // Connect lists
        equal->next = greaterHead->next;
        less->next = equalHead->next;
        head = lessHead->next;

        delete lessHead;
        delete equalHead;
        delete greaterHead;

        return head;
    }
};
void printList(Node* head){
    while(head){
        cout<<head->data;
        if(head->next)
            cout<<"->";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    // 1->4->3->2->5->2->3
    Node* head = new Node(1);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(2);
    head->next->next->next->next->next->next = new Node(3);

    int x=3;
    cout<<"Original List:"<<endl;
    printList(head);

    Solution part;
    head = part.partition(head,x);
    cout<<"Partition List:"<<endl;
    printList(head);

    return 0;
}
// Time Complexity : O(n)
// Space Complexity: O(1)