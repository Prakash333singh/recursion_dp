// The tree is a non-linear data structure, unlike Linked List and Arrays. It is a hierarchical data structure that can be traversed in the following ways:-

// Inorder Traversal
// Preorder Traversal
// Postorder Traversal
// Level Order Traversal.

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

vector<int> InoderTrav(Node *curr)
{
    vector<int> ans;
    stack<Node *> s;
    // this will contain our node
    while (true)
    {
        if (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }

        else
        {
            if (s.empty())
                break;

            curr = s.top();
            ans.push_back(curr->data);
            s.pop();
            curr = curr->right;
        }
    }
    return ans;
}

void helloji(Node *curr, vector<int> &inOrder)
{
    if (curr == NULL)
        return;

    helloji(curr->left, inOrder);
    inOrder.push_back(curr->data);
    helloji(curr->right, inOrder);
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

    vector<int> inOrder;
    // inOrder = InoderTrav(root);
    helloji(root, inOrder);

    cout << "The inOrder Traversal is : ";
    for (int i = 0; i < inOrder.size(); i++)
    {
        cout << inOrder[i] << " ";
    }
}

// time complexity-0(N)