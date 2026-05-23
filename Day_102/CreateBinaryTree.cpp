#include <iostream>
using namespace std;
// Node class
class Node
{
public:
    int data;
    Node*left;
    Node*right;
    Node(int value) 
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Function to create Binary Tree
Node* BinaryTree() 
{
    int x;
    cin>>x;
    // -1 means no node
    if(x==-1) 
    {
        return NULL;
    }

    // Create new node
    Node* temp = new Node(x);

    // Create left subtree
    cout<<"Enter the left child of "<<x<<" :";
    temp->left = BinaryTree();

    // Create right subtree
     cout<<"Enter the right child of "<<x<<" :";
    temp->right = BinaryTree();

    return temp;
}

int main(){
    /*
      Input Example:
      1 2 3 4 5 6 7 8 9 10 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
    */
   cout<<"Enter the Node: "<<" ";
   Node *root;
   root = BinaryTree();

  

    return 0;
}

//                    1
//                2       7
//           3       6         8
//       4     5          9          10