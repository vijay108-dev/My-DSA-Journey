// #include<iostream>
// #include<vector>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };
// Node* RemoveDuplicate(Node *head)
// {
//     // Empty list
//     if(head==NULL)
//     {
//         return head;
//     }
//     vector<int>ans;
//     ans.push_back(head->data);
//     Node *curr = head->next;
//     while(curr)
//     {
//         if(ans[ans.size()-1] != curr->data)
//         {
//             ans.push_back(curr->data);
//         }
//         curr =curr->next;
//     }
//     int size = ans.size()-1;
//     curr = head;
//     while(size--)
//     {
//         curr =curr->next;
//     }

//     curr->next= NULL;
//     curr = head;
//     int index =0;

//     while(index<ans.size())
//     {
//         curr->data=ans[index];
//         index++;
//         curr=curr->next;
//     }
//     return head;
// }

// void Print(Node *head)
// {
//     Node *temp = head;
//     while(temp)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main()
// {
//     Node *head = new Node(2);
//     head->next = new Node(3);
//     head->next->next = new Node(4);
//     head->next->next->next = new Node(3);
//     head->next->next->next->next = new Node(3);
//     head->next->next->next->next->next = new Node(4);
//     head->next->next->next->next->next->next = new Node(4);
//     head = RemoveDuplicate(head);
//     Print(head);

//     return 0;
// }
// TC = O(n)
// SC = O(n)


//     ----------------------Method = 2 --------------------------
#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
Node* RemoveDuplicate(Node *head)
{
    // Empty List
    if(head==NULL)
    {
        return head;
    }

    Node *curr =head->next;
    Node *prev =head;

    while(curr)
    {
        // Duplicate Found
        if(curr->data==prev->data)
        {
            prev->next=curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            prev = prev->next;
            curr = curr->next;
        }
    }
    return head;
}

void Print(Node *head)
{
    Node *temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    Node *head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(4);
    head = RemoveDuplicate(head);
    Print(head);

    return 0;
}
// TC = O(n)
// SC = O(1)