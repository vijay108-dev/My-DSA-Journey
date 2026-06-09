#include <iostream>
#include <vector>
using namespace std;
class Node 
{
public:
    int data;
    Node *left, *right;
    Node(int val) 
    {
        data = val;
        left = right = NULL;
    }
};

int findPos(vector<int>& in, int key, int inStart, int inEnd) 
{
    for (int i=inStart;i<=inEnd;i++) 
    {
        if (in[i]==key)
            return i;
    }
    return -1;
}

Node* buildTree(vector<int>& in, vector<int>& pre,int inStart, int inEnd, int &preIndex) 
{

    if(inStart>inEnd)
        return NULL;

    Node* root = new Node(pre[preIndex++]);
    int pos = findPos(in, root->data, inStart, inEnd);

    root->left = buildTree(in, pre,inStart,pos - 1,preIndex);
    root->right = buildTree(in, pre,pos + 1,inEnd,preIndex);
    return root;
}

void inorderPrint(Node* root) 
{
    if(!root) 
    return;

    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main() 
{

    vector<int>inorder  = {4,2,6,5,7,1,10,8,9,3};
    vector<int>preorder = {4,6,7,5,2,10,9,8,3,1};
    int preIndex=0;
    Node* root = buildTree(inorder,preorder,0,inorder.size() - 1,preIndex);
    cout<<"Inorder Traversal : ";
    inorderPrint(root);

    return 0;
}
//TC = O(N square)
//SC = O(N)