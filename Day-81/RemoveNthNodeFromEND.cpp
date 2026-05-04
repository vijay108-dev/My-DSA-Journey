#include<iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode* next;
    ListNode(int data)
    {
        val=data;
        next=NULL;
    }
};
ListNode* removeNthFromEnd(ListNode* head, int n) 
{
    int count =0;
    ListNode *temp = head;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }

    count -= n;
    if(count==0)
    {
        ListNode *del = head;
        head= head->next;
        delete del;
        return head;
    }
    ListNode *curr = head;
    ListNode *prev = NULL;

    while(count--){
        prev =curr;
        curr =curr->next;
    }
    prev->next = curr->next;
    delete curr;

    return head;
}

void printList(ListNode* head)
{
    while(head!=NULL){
        cout << head->val << " ";
        head = head->next;
    }
}
int main(){
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);
    head->next->next->next->next = new ListNode(50);

    int n = 2;
    head = removeNthFromEnd(head,n);
    printList(head);

    return 0;
}