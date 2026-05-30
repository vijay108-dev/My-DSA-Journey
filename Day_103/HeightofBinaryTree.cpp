#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int Height(Node *root) 
{
    if(root==NULL)
        return 0;

    return 1 + max(Height(root->left), Height(root->right));
}

int main() 
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->left->right->left = new Node(13);
    root->right->left->left = new Node(10);
    root->right->left->right = new Node(11);
    root->right->right->left = new Node(12);
    root->right->right->right = new Node(14);
    root->right->right->right->left = new Node(15);
    cout<<"Height of Binary Tree = " <<Height(root)<<endl;

    return 0;
}