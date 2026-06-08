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

vector<int> Postorder(Node *root){
    vector<int>ans;

    if(root == NULL)
        return ans;

    stack<Node*>s1,s2;

    s1.push(root);
    while (!s1.empty())
    {
        Node *temp = s1.top();
        s1.pop();

        s2.push(temp);

        if (temp->left)
            s1.push(temp->left);

        if (temp->right)
            s1.push(temp->right);
    }

    while (!s2.empty())
    {
        ans.push_back(s2.top()->data);
        s2.pop();
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

    vector<int>ans = Postorder(root);
    for(int x:ans)
    cout<<x<<" ";

    return 0;
}
//8 4 5 2 6 7 3 1