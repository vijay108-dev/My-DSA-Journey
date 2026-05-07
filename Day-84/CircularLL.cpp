//-----------------------------------------METHOD = 1 -------------------------------------------
// #include<iostream>
// #include<vector>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node *next;
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };
// bool check(vector<Node*> visited, Node *curr){
//     for(int i=0;i<visited.size();i++)
//     {
//         if(visited[i] ==curr)
//             return 1;
//     }
//     return 0;
// }

// bool CircularLinkedList(Node *head){
//     Node *curr = head;
//     vector<Node*>visited;

//     while(curr!=NULL)
//     {
//         if(check(visited,curr))
//             return 1;
//         visited.push_back(curr);
//         curr=curr->next;
//     }
//     return 0;
// }

// int main(){
//     Node *head = new Node(2);
//     Node *second = new Node(3);
//     Node *third = new Node(4);
//     Node *fourth = new Node(5);

//     head->next = second;
//     second->next = third;
//     third->next = fourth;

//     // Circular linked List
//     fourth->next = second;
//     if(CircularLinkedList(head))
//         cout<<"Circular Linked List"<<endl;
//     else
//         cout<<"Not Circular Linked List"<<endl;

//     return 0;
// }
//TC= O(n square)
//SC = O(N)



//-------------------------------------------METHOD = 2 ------------------------------------------

// #include<iostream>
// #include<unordered_map>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node *next;

//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };

// bool CircularLinkedList(Node *head){

//     Node *curr = head;
//     unordered_map<Node*, bool> visited;

//     while(curr!=NULL){
//         // agar node pehle se visited hai
//         if(visited[curr] == true)
//             return 1;
//         visited[curr] = true;
//         curr = curr->next;
//     }
//     return 0;
// }

// int main(){

//     Node *head = new Node(2);
//     Node *second = new Node(3);
//     Node *third = new Node(4);
//     Node *fourth = new Node(5);

//     head->next = second;
//     second->next = third;
//     third->next = fourth;

//     // Circular linked List
//     fourth->next = second;
//     if(CircularLinkedList(head))
//         cout<<"Circular Linked List"<<endl;
//     else
//         cout<<"Not Circular Linked List"<<endl;

//     return 0;
// }
//TC = O(N)
//SC = O(N)

//---------------------------------------------METHOD = 3 -----------------------------------------

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

// Floyd Cycle Detection Algorithm
bool CircularLinkedList(Node *head){

    if(head==NULL)
        return false;

    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        // cycle mil gayi
        if(slow==fast)
            return true;
    }
    return false;
}

int main(){

    Node *head = new Node(2);
    Node *second = new Node(3);
    Node *third = new Node(4);
    Node *fourth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;

    // Circular linked List
    fourth->next = second;

    if(CircularLinkedList(head))
        cout<<"Circular Linked List"<<endl;
    else
        cout<<"Not Circular Linked List"<<endl;

    return 0;
}

//TC = O(N)
//SC = O(1)