#include <iostream>
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

void findRange(Node* root, int pos, int &l, int &r)
{
    if(root==NULL)
        return;

    l = min(l,pos);
    r = max(r,pos);

    findRange(root->left, pos-1, l, r);
    findRange(root->right, pos+1, l, r);
}

vector<int>bottomView(Node* root)
{
    int l = 0, r = 0;

    findRange(root, 0, l, r);
    vector<int>ans(r-l+1);
    queue<Node*>q;
    queue<int>index;

    q.push(root);
    index.push(-l);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        int pos = index.front();
        index.pop();

        // Bottom View -> hamesha overwrite
        ans[pos] = temp->data;

        if(temp->left)
        {
            q.push(temp->left);
            index.push(pos - 1);
        }

        if(temp->right)
        {
            q.push(temp->right);
            index.push(pos + 1);
        }
    }

    return ans;
}

int main()
{
    /*
                    1
                 /     \
                2       3
              /   \   /   \
             4     5 6     10
            /
           7
          /
         11
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->left->left = new Node(7);
    root->left->left->left->left = new Node(11);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(10);

    vector<int>ans=bottomView(root);

    cout<<"Bottom View: ";

    for(int x:ans)
        cout<<x<<" ";

    cout<<endl;

    return 0;
}

/*
Output
Bottom View: 11 7 4 2 5 6 10

TC = O(n)
SC = O(n)
*/