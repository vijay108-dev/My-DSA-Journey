#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct Node
{
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

vector<int>levelOrder(Node *root)
{
    vector<int>ans;
    if(root == NULL)
    return ans;

    queue<Node*>q;
    q.push(root);

    Node *temp;
    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        ans.push_back(temp->data);

        if (temp->left)
            q.push(temp->left);

        if (temp->right)
            q.push(temp->right);
    }

    return ans;
}

int main()
{
    //        1
    //      /   \
    //     2     3
    //    / \   / \
    //   4   5 6   7
    //      / \     \
    //     8   9     10

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    root->right->right->right = new Node(10);

    vector<int>result=levelOrder(root);
    cout<<"Level Order Traversal: "<<" ";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }

    return 0;
}
// Time Complexity: O(N)
// Space Complexity: O(N)