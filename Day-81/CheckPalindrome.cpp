#include<iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int data)
    {
        val=data;
        next=NULL;
    }
};
bool isPalindrome(ListNode* head)
{
    int count =0;
    ListNode *temp = head;

    while(temp){
        count++;
        temp=temp->next;
    }

    count/=2;
    ListNode *curr = head, *prev = NULL;

    while(count--){
        prev=curr;
        curr=curr->next;
    }
    prev->next =NULL;
    ListNode *front =NULL;

    prev=NULL;
    while(curr){
        front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }

    ListNode *head1=head;
    ListNode *head2=prev;

    while(head1)
    {
        if(head1->val!=head2->val){
            return 0;
        }

        head1 = head1->next;
        head2 = head2->next;
    }
    return 1;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    if(isPalindrome(head)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }

    return 0;
}