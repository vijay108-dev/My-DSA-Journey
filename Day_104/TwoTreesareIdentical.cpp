#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool IsIdentical(Node *r1, Node *r2)
{
    if (r1==NULL && r2==NULL)
        return true;

    if((!r1&&r2) || (r1&&!r2))
        return false;

    if(r1->data != r2->data)
        return false;

    return IsIdentical(r1->left,r2->left) &&
           IsIdentical(r1->right,r2->right);
}

int main()
{
    // Tree 1
    Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->right = new Node(6);

    // Tree 2
    Node *root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);
    root2->right->right = new Node(6);
    root2->right->right->right = new Node(7);

    if (IsIdentical(root1, root2))
        cout<<"Trees are Identical"<<endl;
    else
        cout<<"Trees are Not Identical"<<endl;

    return 0;
}

// Time Complexity : O(n)
// Space Complexity: O(h)

// Worst Case Space Complexity:O(n)
// (Because of recursion stack in a tree)