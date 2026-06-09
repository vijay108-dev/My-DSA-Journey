#include <iostream>
#include <vector>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) 
    {
        data = val;
        left = right = NULL;
    }
};

int findPos(vector<int>& in, int key, int inStart, int inEnd) 
{
    for(int i=inStart;i<=inEnd;i++) 
    {
        if(in[i] == key)
            return i;
    }
    return -1;
}

Node* buildTree(vector<int>& in, vector<int>& post, int inStart, int inEnd, int& postIndex) 
{

    if(inStart > inEnd)
        return NULL;

    Node* root = new Node(post[postIndex--]);
    int pos = findPos(in, root->data, inStart, inEnd);

    root->right = buildTree(in, post, pos + 1, inEnd, postIndex);
    root->left = buildTree(in, post, inStart, pos - 1, postIndex);

    return root;
}

void preorder(Node* root) 
{
    if(!root) 
    return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) 
{
    if(!root) 
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root) 
{
    if(!root) 
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main() 
{
    vector<int>in = {4,2,6,5,7,1,10,8,9,3};
    vector<int>post = {4,6,7,5,2,10,9,8,3,1};

    int postIndex = post.size()-1;

    Node* root = buildTree(in,post,0,in.size()-1,postIndex);
    cout<< "Preorder  : ";
    preorder(root);

    cout<< "\nInorder   : ";
    inorder(root);

    cout<< "\nPostorder : ";
    postorder(root);

    return 0;
}

// Preorder  : 1 2 4 5 6 7 3 8 10 9 
// Inorder   : 4 2 6 5 7 1 10 8 9 3 
// Postorder : 4 6 7 5 2 10 9 8 3 1 %  