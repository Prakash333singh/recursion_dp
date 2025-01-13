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

// insert time complexity O(logn)
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
    // lnr //left root right
    if (!root)
        return;

    inorder(root->left);
    // inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// To perform a level-order traversal on a binary tree and store the nodes’ values in a 2D vector representing each level, start by initialising an empty queue to hold the level by level nodes.Enqueue the root node into the queue and traverse until the queue is empty. At each level, dequeue all the nodes and enqueue their children if they exist. Store the nodes’ values in the 2D vector representing each level.

vector<vector<int>> levelOrder(Node *root)
{
    // create a 2d vector
    vector<vector<int>> ans;
    if (root == NULL)
    {
        return ans;
    }

    // craete a queuue
    queue<Node *> q;
    // push the root node to the queue
    q.push(root);

    while (!q.empty())
    {
        // get the size of the current level
        int size = q.size();

        vector<int> vec;

        for (int i = 0; i < size; i++)
        {
            // dequeue the front node
            Node *temp = q.front();
            // remove the front node
            q.pop();

            // store the node's value in the vector
            vec.push_back(temp->data);

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }

        ans.push_back(vec);
    }

    return ans;
}

bool search(Node *root, int target)
{

    /// itertive way
    // time complexity O(n)
    // spcae complexity O(1)
    // BinaryTreeNode<Node> *temp = root;
    // while (temp != NULL)
    // {
    //     if (temp->data == target)
    //     {
    //         return true;
    //     }

    //     if (temp->data < target)
    //     {
    //         temp = temp->right;
    //     }
    //     else
    //     {
    //         temp = temp->left;
    //     }
    //     return false;
    // }

    // recurive way
    if (!root)
        return 0;

    if (root->data == target)
        return 1;

    if (target > root->data)
        return search(root->right, target);
    else
        return search(root->left, target);
}

Node *minVal(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxVal(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node *deleteFromBst(Node *root, int value)
{
    // base case
    if (root == NULL)
    {
        retunr root;
    }

    if (root->data == value)
    {

        /// 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            return temp;
        }

        // 2 child
        if (root->left == NULL && root->right != NULL)
        {
            //  minVal(root->right) mini node ayega
            int mini = minVal(root->right)->data;
            root->data = min;
            root->right = deleteFromBst(root->right, mini);
            return root;
        }
    }
    else if (root->data > value)
    {
        // left mai jao
        root->left = deleteFromBst(root->left, value);
        return root;
    }
    else
    {
        // right mai jao
        root->right = deleteFromBst(root->right, value);
        return root;
    }
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
    // sc ->0(height of tree)
    cout << ans << endl;

    cout << "min value is--->" << minVal(root)->data << endl;
    cout << "max value is--->" << maxVal(root)->data << endl;
}