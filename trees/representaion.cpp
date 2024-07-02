#include <bits\stdc++.h>
using namespace std;
class Node
{
public:
    int data;    // value of the node
    Node *left;  // left refernce pointer to node
    Node *right; // right reference pointer to node

    // this is the constuctor to initiase the value
    Node(int val)
    {
        // data = val;
        this->data = val;
        left = right = NULL;
    }
};

int main()
{
    // Creating nodes
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Traversing the tree to print the values
    cout << "Tree values: ";
    cout << root->data << " ";
    cout << root->left->data << " ";
    cout << root->right->data << " ";
    cout << root->left->left->data << " ";
    cout << root->left->right->data << endl;

    return 0;
    ;
}