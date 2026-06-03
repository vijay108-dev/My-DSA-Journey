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
        left = NULL;
        right = NULL;
    }
};

void RightView(Node* root, int level, vector<int>& ans)
{
    if(root==NULL)
        return;

    // Is level par pehli baar aaye
    if(level==ans.size())
        ans.push_back(root->data);

    // Right pehle, Left baad me
    RightView(root->right, level+1, ans);
    RightView(root->left, level+1, ans);
}

vector<int>rightView(Node* root)
{
    vector<int>ans;
    RightView(root, 0, ans);
    return ans;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->left = new Node(8);
    root->right->left->left->left = new Node(11);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);
    vector<int>ans = rightView(root);
    cout<<"Right View: ";

    for(int x:ans)
        cout<<x<<" ";

    cout<<endl;

    return 0;
}

/*
Output
Right View: 1 3 7 10 11

TC = O(n)
SC = O(h)
*/