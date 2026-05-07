#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
class Solution{
 public:

    int getCount(Node* head){
        int cnt=0;
        while (head){
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    Node* intersectionPoint(Node* head1, Node* head2) 
    {

        int count1 = getCount(head1);
        int count2 = getCount(head2);
        Node* curr1 = head1;
        Node* curr2 = head2;

        // Move bigger list ahead
        while (count1 > count2){
            curr1 = curr1->next;
            count1--;
        }
        while (count2 > count1){
            curr2 = curr2->next;
            count2--;
        }

        // Find intersection
        while (curr1 != curr2){
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return curr1;
    }
};

int main(){

    // Common Part
    Node* common = new Node(5);
    common->next = new Node(6);
    common->next->next = new Node(7);

    // First List
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(4);
    head1->next->next->next->next = common;

    // Second List
    Node* head2 = new Node(8);
    head2->next = new Node(9);
    head2->next->next = common;

    Solution obj;
    Node* ans = obj.intersectionPoint(head1, head2);

    if(ans)
        cout<<"Intersection Point: "<<ans->data<<endl;
    else
        cout<<"Their is No Intersection"<<endl;

    return 0;
}
//TC = O(N)
//SC = O(1)