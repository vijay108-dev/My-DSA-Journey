#include <iostream>
#include <vector>
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
    // Reverse Linked List
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* front;

        while(curr){
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    }

    // Remove leading zeros
    Node* removeZero(Node* head){
        while(head && head->data == 0)
            head = head->next;

        if(head == NULL)
            return new Node(0);

        return head;
    }

    // Compare two lists
    bool smaller(Node* head1, Node* head2){
        vector<int> v1, v2;

        while(head1)
        {
            v1.push_back(head1->data);
            head1 = head1->next;
        }
        while(head2)
        {
            v2.push_back(head2->data);
            head2 = head2->next;
        }

        if(v1.size() != v2.size())
            return v1.size() < v2.size();

        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i])
                return v1[i] < v2[i];
        }
        return false;
    }

    Node* subLinkedList(Node* head1, Node* head2)
    {
        head1 = removeZero(head1);
        head2 = removeZero(head2);

        // Ensure head1 >= head2
        if(smaller(head1, head2))
            swap(head1, head2);

        // Reverse both lists
        head1 = reverse(head1);
        head2 = reverse(head2);

        Node* dummy = new Node(0);
        Node* tail = dummy;

        int borrow = 0;
        while(head1)
        {
            int d1 = head1->data - borrow;
            int d2 = (head2) ? head2->data : 0;

            if(d1<d2)
            {
                d1+=10;
                borrow=1;
            }
            else
            {
                borrow=0;
            }
            int sub = d1-d2;

            tail->next = new Node(sub);
            tail = tail->next;
            head1 = head1->next;

            if(head2)
                head2 = head2->next;
        }

        // Reverse answer
        Node* ans = reverse(dummy->next);

        // Remove leading zeros
        ans = removeZero(ans);

        return ans;
    }
};

void printList(Node* head){
    while(head){
        cout<<head->data;
        if(head->next)
            cout<<" ->";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    // 100
    Node* head1 = new Node(1);
    head1->next = new Node(0);
    head1->next->next = new Node(0);

    // 12
    Node* head2 = new Node(1);
    head2->next = new Node(2);

    Solution sub;
    Node* ans = sub.subLinkedList(head1,head2);

    cout<<"Result:"<<endl;
    printList(ans);

    return 0;
}
//Time Complexity = O(n + m)
//Space Complexity = O(n + m)