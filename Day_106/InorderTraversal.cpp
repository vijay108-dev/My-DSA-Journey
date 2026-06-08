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

vector<int> Inorder(Node *root){
    vector<int>ans;
    if(root == NULL)
        return ans;
    stack<Node*>s;
    stack<bool>visited;

    s.push(root);
    visited.push(0);
    while (!s.empty()){
        Node *temp = s.top();
        s.pop();

        bool flag = visited.top();
        visited.pop();

        if(flag)
        {
            ans.push_back(temp->data);
        }
        else
        {
            if (temp->right)
            {
                s.push(temp->right);
                visited.push(0);
            }

            s.push(temp);
            visited.push(1);

            if (temp->left)
            {
                s.push(temp->left);
                visited.push(0);
            }
        }
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
    vector<int>ans = Inorder(root);
    for(int x:ans)
    cout<<x<<" ";

    return 0;
}

//         1
//       /   \
//      2     3
//     / \   / \
//    4   5 6   7
//   /
//  8

//8 4 2 5 1 6 3 7