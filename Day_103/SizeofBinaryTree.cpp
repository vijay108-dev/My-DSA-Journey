#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int TotalNode(Node *root)
{
    if(root==NULL)
        return 0;
    return 1 + TotalNode(root->left) + TotalNode(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->left->right = new Node(6);
    root->left->left->left = new Node(7);
    root->left->right->right = new Node(8);
    root->right->left = new Node(4);
    root->right->right = new Node(9);
    root->right->left->right = new Node(11);
    cout<<"Size of Binary Tree = " <<TotalNode(root)<<endl;

    return 0;
}
// TC = O(N)
// SC = O(H) jahan H tree ki height hai