#include <bits\stdc++.h>
using namespace std;

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

// Rename the function to avoid conflict with vector name
void preorderTraversal(Node *curr, vector<int> &ans)
{
    if (curr == NULL)
        return;

    // root left right
    ans.push_back(curr->data);
    preorderTraversal(curr->left, ans);
    preorderTraversal(curr->right, ans);
}

vector<int> neeetu(Node *curr)
{
    vector<int> preorder;

    if (curr == NULL)
        return preorder;

    stack<Node *> st;
    st.push(curr);

    while (!st.empty())
    {
        Node *topnode = st.top();
        preorder.push_back(topnode->data);
        st.pop();

        // left dekna fir right
        // kyuki left phele chaiye wo isliye right phele daal rahe hai
        if (topnode->right != NULL)
            st.push(topnode->right);

        if (topnode->left != NULL)
            st.push(topnode->left);
    }
    return preorder;
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

    vector<int> preorder; // Rename the vector to avoid conflict
    // preorderTraversal(root, preorder);
    preorder = neeetu(root);

    cout << "The preorder Traversal is : ";
    for (int i = 0; i < preorder.size(); i++)
    {
        cout << preorder[i] << " ";
    }
    return 0;
}