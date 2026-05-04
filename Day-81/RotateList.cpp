#include<iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int data)
    {
        val = data;
        next = NULL;
    }
};

ListNode* rotateRight(ListNode* head, int k)
{
    int count=0;
    ListNode *temp=head;

    while(temp)
    {
        count++;
        temp=temp->next;
    }

    k=k%count;
    count-=k;
    if(k==0)
    {
        return head;
    }
    ListNode *curr = head, *prev = NULL;

    while(count--)
    {
        prev=curr;
        curr=curr->next;
    }

    prev->next=NULL;
    ListNode *Tail=curr;
    while(Tail->next!=NULL)
    {
        Tail=Tail->next;
    }
    Tail->next=head;
    return curr;
}
void printList(ListNode *head)
{
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
}
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k=2;
    head=rotateRight(head,k);
    printList(head);

    return 0;
}