#include <iostream>
using namespace std;
class Node{
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

Node* createDLL(int arr[], int index, int n, Node* head){

    // Base Case
    if(index==n)
        return head;
    Node* temp =new Node(arr[index]);
    // Insert at Start
    temp->next =head;

    if(head!=NULL)
        head->prev = temp;
    head=temp;

    return createDLL(arr, index + 1, n, head);
}
void Print(Node* head) 
{
    while(head){
        cout << head->data <<" ";
        head = head->next;
    }
}

int main(){
    int arr[]={10, 20, 30, 40};
    int n =4;
    Node* head =NULL;
    head =createDLL(arr,0,n,head);
    Print(head);

    return 0;
}