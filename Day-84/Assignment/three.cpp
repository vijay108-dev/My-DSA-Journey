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
void SplitList(Node *head){

    Node *slow = head;
    Node *fast = head;
    while(fast->next != head &&fast->next->next != head)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *head1 = head;
    Node *head2 = slow->next;
    slow->next = head1;
    if(fast->next->next == head)
        fast = fast->next;

    fast->next = head2;
    // First Half
    cout<<"First Half : ";
    Node *temp = head1;

    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head1);

    cout<<endl;

    // Second Half
    cout<<"Second Half : ";
    temp = head2;

    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head2);
}

int main(){

    int arr[] = {1,2,3,4,5,6};
    Node *head = new Node(arr[0]);
    Node *temp = head;
    for(int i=1;i<6;i++)
    {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    temp->next = head;
    SplitList(head);

    return 0;
}
//TC = O(N)
//SC = O(1)