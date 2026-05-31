#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> SpiralTraversal(Node *root){
    vector<int>ans;
    if(root==NULL)
        return ans;

    stack<Node*>s1; // Right to Left
    stack<Node*>s2; // Left to Right
    s1.push(root);

    while(!s1.empty() || !s2.empty()){
        while (!s1.empty())
        {
            Node *temp = s1.top();
            s1.pop();

            ans.push_back(temp->data);

            if(temp->right)
                s2.push(temp->right);

            if(temp->left)
                s2.push(temp->left);
        }

        while(!s2.empty())
        {
            Node *temp=s2.top();
            s2.pop();
            ans.push_back(temp->data);

            if(temp->left)
                s1.push(temp->left);

            if(temp->right)
                s1.push(temp->right);
        }
    }
    return ans;
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(11);
    root->right->left->left = new Node(12);
    root->right->left->right = new Node(13);
    root->right->right->left = new Node(14);
    root->right->right->right = new Node(15);
    root->left->left->left->left = new Node(16);
    root->left->left->right->left = new Node(17);
    root->left->left->right->right = new Node(18);
    root->left->right->right->right = new Node(19);
    root->right->left->right->left = new Node(20);
    root->right->left->right->right = new Node(21);
    root->right->right->right->left = new Node(22);
    root->right->right->right->right = new Node(23);
    vector<int>ans = SpiralTraversal(root);
    for(int x:ans)
        cout<<x<<" ";

    return 0;
}
//TC = O(N)
//SC = O(N)