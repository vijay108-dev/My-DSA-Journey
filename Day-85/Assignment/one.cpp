#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
// Create Linked List from Array
Node* createList(int arr[], int size){

    if (size==0){
        return NULL;
    }
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1;i<size;i++)
    {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

class Solution 
{
public:
    Node* reverseBetween(Node* head, int a, int b) 
    {
        // If list empty or same position
        if(head==NULL || a==b) 
        {
            return head;
        }
        Node* prev = NULL;
        Node* curr = head;
        int pos = 1;

        // Move to position a
        while(pos<a) 
        {
            prev = curr;
            curr = curr->next;
            pos++;
        }
        // Store pointers
        Node* leftPart = prev;
        Node* sublistTail = curr;
        Node* nextNode = NULL;

        // Reverse from a to b
        while(pos<=b) 
        {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            pos++;
        }

        // Connect left part
        if(leftPart!=NULL) 
        {
            leftPart->next = prev;
        }
        else
        {
            head = prev;
        }

        // Connect remaining list
        sublistTail->next = curr;
        return head;
    }
};

// Print Linked List
void printList(Node* head) 
{

    while (head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    Node* head =createList(arr, size);
    int a = 2;
    int b = 4;

    Solution obj;
    head = obj.reverseBetween(head, a, b);
    printList(head);

    return 0;
}
//TC = O(N)
//SC = O(1)