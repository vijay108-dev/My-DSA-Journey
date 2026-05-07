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
int LengthOfLoop(Node *head){

    Node *slow = head;
    Node *fast = head;

    // Detect Cycle
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        // cycle found
        if(slow==fast)
        {
            int count=1;
            slow = slow->next;
            while(slow!=fast)
            {
                count++;
                slow=slow->next;
            }
            return count;
        }
    }
    return 0;
}

int main(){
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);
    Node *sixth = new Node(6);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    // Loop create
    sixth->next = third;
    cout<<"Length of Loop = "<<LengthOfLoop(head)<<endl;

    return 0;
}
//TC=O(n)
//SC=O(1)