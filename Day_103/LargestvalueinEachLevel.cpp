#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node 
{
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

vector<int> LargestInEachLevel(Node *root) 
{
    vector<int>ans;
    if(root==NULL)
        return ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()) 
    {
        int size=q.size();
        int maxi=INT_MIN;
        for (int i=0;i<size;i++) 
        {
            Node *node=q.front();
            q.pop();
            maxi = max(maxi,node->data);

            if (node->left)
                q.push(node->left);

            if (node->right)
                q.push(node->right);
        }

        ans.push_back(maxi);
    }
    return ans;
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
    vector<int>result=LargestInEachLevel(root);
    cout<<"Largest value in each level: "<<" ";
    for(int x:result) 
    {
        cout<<x<<" ";
    }

    return 0;
}