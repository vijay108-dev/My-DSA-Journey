/*#include <iostream>
#include <vector>
#include <queue>
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

vector<int> leftView(Node* root)
{
    vector<int>ans;

    if(root==NULL)
        return ans;

    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        int n = q.size();

        // Level ka pehla node left view me aayega
        ans.push_back(q.front()->data);

        while(n--)
        {
            Node* temp = q.front();
            q.pop();

            if(temp->left)
                q.push(temp->left);

            if(temp->right)
                q.push(temp->right);
        }
    }

    return ans;
}

int main()
{
    /*
            1
          /   \
         2     3
        / \   /
       4   5 6
          / \
         7   8
              \
               9
    */

   /*
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(8);
    root->left->right->right->right = new Node(9);
    root->right->left = new Node(6);

    vector<int>ans = leftView(root);
    cout<<"Left View: ";
    for(int x:ans)
        cout<<x<<" ";
    cout<<endl;

    return 0;
}*/

/*
Output
Left View: 1 2 4 7 9
TC = O(n)
SC = O(n)
*/

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

void LeftView(Node* root, int level, vector<int>& ans)
{
    if(root==NULL)
        return;

    // Is level par pehli baar aaye hain
    if(level==ans.size())
        ans.push_back(root->data);

    // Pehle left, fir right
    LeftView(root->left, level+1, ans);
    LeftView(root->right, level+1, ans);
}

vector<int>leftView(Node* root)
{
    vector<int>ans;
    LeftView(root,0,ans);
    return ans;
}

int main()
{
    /*
            1
          /   \
         2     3
        / \   /
       4   5 6
          / \
         7   8
              \
               9
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(8);
    root->left->right->right->right = new Node(9);
    root->right->left = new Node(6);
    vector<int>ans = leftView(root);
    cout<<"Left View: ";
    for(int x :ans)
        cout<<x<<" ";
    cout<<endl;

    return 0;
}

/*
Output
Left View: 1 2 4 7 9
TC = O(n)
SC = O(h)   //recursion stack
Worst Case = O(n)
*/