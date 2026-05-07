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
// Create Linked List from Array
Node* createList(int arr[], int size) 
{

    if(size==0)
    {
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
class Solution{
public:
    long long MOD = 1000000007;
    long long getNumber(Node* head) 
    {
        long long num = 0;
        while (head != NULL) 
        {
            num = (num*10 + head->data) % MOD;
            head = head->next;
        }
        return num;
    }

    long long multiplyTwoLists(Node* first, Node* second) 
    {
        long long num1 = getNumber(first);
        long long num2 = getNumber(second);
        return (num1 * num2) % MOD;
    }
};

// Print Linked List
void printList(Node* head) 
{
    while (head != NULL) 
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    int arr1[] = {3, 2};
    int arr2[] = {2};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    Node* head1 = createList(arr1, size1);
    Node* head2 = createList(arr2, size2);

    Solution obj;
    cout<<obj.multiplyTwoLists(head1, head2)<<endl;

    return 0;
}