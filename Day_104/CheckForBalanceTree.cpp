#include <iostream>
#include <cmath>
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

int height(Node *root, int &valid)
{
    if(!root)
        return 0;

    int L=height(root->left, valid);
    int R=height(root->right, valid);
    if(abs(L-R)>1)
        valid=0;
    return 1 + max(L,R);
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
    root->left->right->left = new Node(15);
    root->left->right->right = new Node(10);
    root->left->right->right->left = new Node(12);
    root->left->right->right->right = new Node(13);
    root->right->right->right = new Node(11);

    int valid=1;
    height(root,valid);

    if(valid)
        cout<<"Balanced Tree"<<endl;
    else
        cout<<"Not Balanced Tree"<<endl;

    return 0;
}
//Time Complexity : O(n)
//Space Complexity: O(n)