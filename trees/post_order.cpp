#include <bits\stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        this->data = value;
        left = right = NULL;
    }
};

void postOrderTrav(Node *curr, vector<int> &postOrder)
{
    if (curr == NULL)
        return;

    postOrderTrav(curr->left, postOrder);
    postOrderTrav(curr->right, postOrder);
    postOrder.push_back(curr->data);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(8);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);

    vector<int> postOrder;
    postOrderTrav(root, postOrder);

    cout << "The postOrder Traversal is : ";

    for (int i = 0; i < postOrder.size(); i++)
    {
        cout << postOrder[i] << " ";
    }

    return 0;
}