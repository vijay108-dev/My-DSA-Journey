// #include <iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* next;
//     Node* arb;
//     Node(int x){
//         data = x;
//         next = NULL;
//         arb = NULL;
//     }
// };
// Node* find(Node* curr1, Node* curr2, Node* x){
//     if(x==NULL)
//     return NULL;
//     while(curr1!=x){
//         curr1 = curr1->next;
//         curr2 = curr2->next;
//     }
//     return curr2;
// }

// Node *copyList(Node *head)
// {
//     Node* headCopy = new Node(0);
//     Node* tailCopy = headCopy;
//     Node* temp = head;
//     while(temp)
//     {
//         tailCopy->next = new Node(temp->data);
//         tailCopy = tailCopy->next;
//         temp = temp->next;
//     }
//     tailCopy = headCopy;
//     headCopy = headCopy->next;
//     delete tailCopy;

//     tailCopy = headCopy;
//     temp = head;

//     while(temp)
//     {
//         tailCopy->arb = find(head, headCopy, temp->arb);
//         tailCopy = tailCopy->next;
//         temp = temp->next;
//     }
//     return headCopy;
// }

// void printList(Node* head)
// {
//     while(head)
//     {
//         cout<<"Data = "<<head->data;
//         if(head->arb)
//             cout<<" , Arb = "<<head->arb->data;
//         else
//             cout<<" , Arb = NULL";
//         cout<<endl;
//         head=head->next;
//     }
// }
// int main(){
//     // 1 2 3 4 5
//     Node* head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(4);
//     head->next->next->next->next = new Node(5);

//     // Random / arb pointers
//     head->arb = head->next->next;                   // 1 -> 3
//     head->next->arb = head;                         // 2 -> 1
//     head->next->next->arb = head->next->next->next;// 3 -> 4
//     head->next->next->next->arb = head->next;      // 4 -> 2
//     head->next->next->next->next->arb = head;      // 5 -> 1

//     cout<<endl;

//     cout<<"Original List:"<<endl;
//     printList(head);

//     cout<<endl;

//     Node* clone = copyList(head);
//     cout<<"Cloned List:"<<endl;
//     printList(clone);

//     return 0;
// }
//TC = O(n square)
//SC = O(n)

//--------------------------------------------------METHOD = 2------------------------------------------------
// #include <iostream>
// #include <unordered_map>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* next;
//     Node* arb;
//     Node(int x){
//         data = x;
//         next = NULL;
//         arb = NULL;
//     }
// };
// Node* copyList(Node* head){
//     if(head==NULL)
//         return NULL;

//     unordered_map<Node*, Node*> mp;
//     Node* temp = head;

//     // Step 1: Create copy nodes
//     while(temp){
//         mp[temp] = new Node(temp->data);
//         temp = temp->next;
//     }

//     temp = head;
//     // Step 2: Connect next and arb pointers
//     while(temp){
//         mp[temp]->next = mp[temp->next];
//         mp[temp]->arb = mp[temp->arb];

//         temp = temp->next;
//     }
//     return mp[head];
// }

// void printList(Node* head){
//     while(head)
//     {
//         cout<<"Data = "<<head->data;
//         if(head->arb)
//             cout<<" , Arb = "<<head->arb->data;
//         else
//             cout<<" , Arb = NULL";

//         cout<<endl;
//         head = head->next;
//     }
// }
// int main(){
//     // 1 2 3 4 5
//     Node* head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(4);
//     head->next->next->next->next = new Node(5);

//     // arb pointers
//     head->arb = head->next->next;                    // 1 -> 3
//     head->next->arb = head;                          // 2 -> 1
//     head->next->next->arb = head->next->next->next; // 3 -> 4
//     head->next->next->next->arb = head->next;       // 4 -> 2
//     head->next->next->next->next->arb = head;       // 5 -> 1

//     cout<<endl;

//     cout<<"Original List:"<<endl;
//     printList(head);

//     cout<<endl;

//     Node* clone = copyList(head);
//     cout<<"Cloned List:"<<endl;
//     printList(clone);

//     return 0;
// }
//TC = O(N)
//SC = O(N)

//-----------------------------------------METHOD = 3-------------------------------------------------
#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* arb;
    Node(int x){
        data = x;
        next = NULL;
        arb = NULL;
    }
};
Node* copyList(Node* head){
    if(head == NULL)
    return NULL;
    Node* curr1 = head;
    Node* front1;
    Node* curr2;
    Node* front2;

    // Step 1: Insert copy nodes in between
    while(curr1){
        front1 = curr1->next;
        curr2 = new Node(curr1->data);
        curr1->next = curr2;
        curr2->next = front1;
        curr1 = front1;
    }

    // Step 2: Copy arb pointers
    curr1 = head;
    while(curr1){
        curr2 = curr1->next;
        if(curr1->arb)
            curr2->arb = curr1->arb->next;
        curr1 = curr2->next;
    }

    // Step 3: Separate both lists
    curr1 = head;
    Node* headCopy = head->next;
    while(curr1)
    {
        front1 = curr1->next;
        curr2 = curr1->next;
        front2 = curr2->next;
        curr1->next = front2;
        if(front2)
            curr2->next = front2->next;
        curr1 = front2;
    }
    return headCopy;
}

void printList(Node* head){
    while(head){
        cout<<"Data = "<<head->data;

        if(head->arb)
            cout<<" , Arb = "<<head->arb->data;
        else
            cout<<" , Arb = NULL";

        cout<<endl;
        head= head->next;
    }
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // arb pointers
    head->arb = head->next->next;                    // 1 -> 3
    head->next->arb = head;                          // 2 -> 1
    head->next->next->arb = head->next->next->next; // 3 -> 4
    head->next->next->next->arb = head->next;       // 4 -> 2
    head->next->next->next->next->arb = head;       // 5 -> 1

    cout<<endl;

    cout<<"Original List:"<<endl;
    printList(head);

    cout<<endl;

    Node* clone = copyList(head);
    cout<<"Cloned List:"<<endl;
    printList(clone);

    return 0;
}
//TC = O(n)
//SC = O(1)