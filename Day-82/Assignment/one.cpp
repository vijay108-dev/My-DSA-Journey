#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};
Node* createDLL(int arr[], int n){

    Node* head = NULL;
    for(int i=0;i<n;i++){
        Node* temp =new Node(arr[i]);

        // Insert at Start
        temp->next=head;
        if(head!=NULL)
            head->prev=temp;
        head=temp;
    }
    return head;
}
void display(Node* head){

    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    int arr[]={10,20,30,40};
    int n=4;
    Node* head=createDLL(arr,n);

    display(head);

    return 0;
}