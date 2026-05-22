#include <iostream>
#include <queue>
using namespace std;
// Node class
class Node{
public:
    int data;
    Node *left;
    Node *right;
    // Constructor
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

int main(){
    int x;

    // Root node ko input liya
    cin>>x;

    // Queue for level order tree creation
    queue<Node*>q;

    // Create root node
    Node *root=new Node(x);

    // Push root into queue
    q.push(root);

    // Tree creation
    while(!q.empty())
    {
        // Front node
        Node*temp=q.front();
        q.pop();

        // Left child input
        int leftData;
        cin>>leftData;
        if (leftData!=-1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        // Right child input
        int rightData;
        cin >> rightData;

        if (rightData!=-1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
    cout<<"Binary Tree Created Successfully"<<endl;

    return 0;
}