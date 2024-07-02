
#include <bits/stdc++.h>
using namespace std;

/// insertion at the begining
struct Node
{
    int data;
    Node *next;
};

void insertAtBegining(Node *&head, int newdata)
{
    Node *newNode = new Node();
    newNode->data = newdata;
    newNode->next = head;
    head = newNode;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}
///////////////////////////////////////////////////////////////

// insertion at the end
void insertAtEnd(Node *&head, int newData)
{
    // sabse phle maine new node bana liya
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = NULL;

    /// agar puri phele he null ho
    /// jo node hum daal rhe hai wahi first node ho

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *last = head;
    // last node mai head ko save kar liya
    // taaki hum orginal head ko loose na kare

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
}

//////////////////////////////////////////////////////////////////////

void insertAtPosition(Node *&head, int newData, int position)
{

    Node *newNode = new Node();
    newNode->data = newData;

    if (position == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    /// head ko save kar lenge
    Node *temp = head;
    for (int i = 0; i < position && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "jo tune psoition you have give is greater the the size of list";
    }

    // newNode->next = temp->next; ensures that newNode points to the next
    //  node that temp was originally pointing to.
    // temp->next = newNode; inserts newNode after temp by making temp
    //  point to newNode

    // temp is already pointing to the node after which we want to insert newNode.
    newNode->next = temp->next;
    /// newNode -> 3
    temp->next = newNode;
    // 2->6->3
}

void deleteNodeByKey(Node *&head, int key)
{
    Node *temp = head;
    Node *prev = nullptr;
    if (temp != nullptr && temp->data == key)
    {
        head = temp->next;
        delete temp;
        return;
    }
    while (temp != nullptr && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        cout << "Key not found" << endl;
        return;
    }
    prev->next = temp->next;
    delete temp;
}

Node *reverse(Node *head)
{
    Node *prev = nullptr;
    Node *current = head;
    Node *next = nullptr;
    while (current->next != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

bool search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }

    return false;
}

int main()
{
    Node *head = NULL;
    insertAtBegining(head, 3);
    insertAtBegining(head, 2);
    insertAtBegining(head, 1);
    insertAtEnd(head, 4);
    insertAtPosition(head, 6, 1);
    printList(head);
    cout << endl;

    // bool ans = search(head, 9);
    // cout << ans << endl;

    deleteNodeByKey(head, 6);
    cout << endl;
    printList(head);
    cout << endl;

    Node *newhead = reverse(head);
    printList(newhead);
    return 0;
}