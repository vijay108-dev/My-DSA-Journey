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

int SumOfTree(Node *root){
    if (root==NULL)
        return 0;

    return root->data + SumOfTree(root->left) + SumOfTree(root->right);
}

int main()
{
    Node *root = new Node(3);
    root->left = new Node(2);
    root->right = new Node(1);
    root->left->left = new Node(4);
    root->left->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->right->right = new Node(5);
    root->right->right->right = new Node(6);
    cout<<"Sum of Binary Tree = " <<SumOfTree(root)<<endl;

    return 0;
}