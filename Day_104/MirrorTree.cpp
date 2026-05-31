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

void Mirror(Node *root)
{
    if(!root)
        return;

    Node *temp = root->right;
    root->right = root->left;
    root->left = temp;
    Mirror(root->left);
    Mirror(root->right);
}

void Inorder(Node *root)
{
    if(root==NULL)
        return;
    Inorder(root->left);
    cout << root->data<<" ";
    Inorder(root->right);
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout<<"Original Tree (Inorder): ";
    Inorder(root);

    Mirror(root);
    cout<<"Mirror Tree (Inorder): ";
    Inorder(root);

    return 0;
}