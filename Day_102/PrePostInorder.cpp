#include <iostream>
using namespace std;
// Node class
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Function to create Binary Tree
Node* BinaryTree() 
{
    int x;
    cin>>x;

    // -1 means no node
    if(x==-1) 
    {
        return NULL;
    }

    // Create new node
    Node* temp = new Node(x);

    // Create left subtree
    temp->left = BinaryTree();

    // Create right subtree
    temp->right = BinaryTree();

    return temp;
}

// Preorder Traversal
void preorder(Node* root) 
{
    if(root == NULL) 
    {
        return;
    }

    // Root Left Right
    cout<<root->data<<" ";

    preorder(root->left);

    preorder(root->right);
}

// Inorder Traversal
void inorder(Node* root) 
{

    if(root == NULL) {
        return;
    }

    // Left Root Right
    inorder(root->left);

    cout<<root->data<<" ";

    inorder(root->right);
}

// Postorder Traversal
void postorder(Node* root) 
{
    if(root == NULL) 
    {
        return;
    }

    // Left Right Root
    postorder(root->left);

    postorder(root->right);

    cout<<root->data<<" ";
}

int main() 
{
    /*
      Example Input:
      1 2 4 -1 -1 5 -1 -1 3 -1 -1
    */

    Node* root = BinaryTree();
    cout<<"Preorder Traversal: ";
    preorder(root);

    cout<<endl;

    cout<<"Inorder Traversal: ";
    inorder(root);

    cout<<endl;

    cout<<"Postorder Traversal: ";
    postorder(root);

    return 0;
}