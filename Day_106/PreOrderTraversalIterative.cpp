#include <iostream>
#include <vector>
#include <stack>
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

vector<int> Preorder(Node *root){
    vector<int>ans;

    if(root == NULL)
        return ans;

    stack<Node*>s;
    s.push(root);

    while(!s.empty())
    {
        Node *temp = s.top();
        s.pop();

        ans.push_back(temp->data);

        if (temp->right)
            s.push(temp->right);

        if (temp->left)
            s.push(temp->left);
    }

    return ans;
}

int main()
{
    //         Tree:
    //          1
    //       /     \
    //      2       3
    //    /  \    /  \
    //   4    5  6    7
    //  /
    // 8
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);

    vector<int>ans = Preorder(root);
    for(int x:ans)
    cout<<x<<" ";

    return 0;
}
//1 2 4 8 5 3 6 7    
//TC = O(n)
//SC = O(n) 