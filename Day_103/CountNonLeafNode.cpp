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

int CountNonLeafNodes(Node *root) 
{
    if(root==NULL)
        return 0;

    if (root->left==NULL && root->right==NULL)
        return 0;

    return 1 + CountNonLeafNodes(root->left) + CountNonLeafNodes(root->right);
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
    root->right->left->left = new Node(10);
    root->right->left->right = new Node(11);
    root->right->left->left->left = new Node(12);
    root->right->left->right->right = new Node(13);
    cout<<"Total Non-Leaf Nodes = " <<CountNonLeafNodes(root)<<endl;

    return 0;
}