#include <iostream>
#include <queue>
using namespace std;

class Node
{
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

bool Parent(Node *root, int a, int b)
{
    if (root == NULL)
        return false;

    if (root->left && root->right)
    {
        if (root->left->data == a && root->right->data == b)
            return true;

        if (root->left->data == b && root->right->data == a)
            return true;
    }

    return Parent(root->left, a, b) ||
           Parent(root->right, a, b);
}

bool IsCousin(Node *root, int a, int b)
{
    if (root == NULL)
        return false;

    queue<Node *> q;
    q.push(root);

    int l1 = -1;
    int l2 = -1;

    int level = 0;

    while (!q.empty())
    {
        int n = q.size();

        while (n--)
        {
            Node *temp = q.front();
            q.pop();

            if (temp->data == a)
                l1 = level;

            if (temp->data == b)
                l2 = level;

            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }

        level++;

        if (l1 != l2)
            return false;

        if (l1 != -1)
            break;
    }

    return !(Parent(root, a, b));
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

    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);

    root->right->right->left = new Node(10);
    root->right->right->right = new Node(11);

    int a = 8;
    int b = 10;

    if (IsCousin(root, a, b))
        cout << "Cousins Hai";
    else
        cout << "Cousins Nahi Hai";

    return 0;
}
// TC = O(N)
// SC = O(N)