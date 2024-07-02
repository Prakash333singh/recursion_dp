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

Node *insert(Node *root, int value)
{
    if (!root)
    {
        Node *temp = new Node(value);
        return temp;
    }
    // left side jana
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }

    return root;
}
void inorder(Node *root)
{
    // lnr
    if (!root)
        return;

    inorder(root->left);
    // inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

bool search(Node *root, int target)
{
    if (!root)
        return 0;

    if (root->data == target)
        return 1;

    if (target > root->data)
        return search(root->right, target);
    else
        return search(root->left, target);
}
int main()
{
    int arr[] = {6, 3, 17, 5, 11, 18, 2, 1, 20, 14};
    Node *root = NULL;
    for (int i = 0; i < 10; i++)
    {
        root = insert(root, arr[i]);
    }

    inorder(root);
    cout << "\n";
    bool ans = search(root, 9);
    // search time complexity
    // best case 0(height of tree)
    // worst case where the tree is degenerate (linear), the time complexity becomes O(n)
    cout << ans;
}