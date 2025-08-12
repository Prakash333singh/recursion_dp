
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
    // sabse phle maine new node bana liya
    Node *newNode = new Node();
    // assign the value in heap memory
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

    /// agar head phele he null hoto
    /// jo node hum daal rhe hai wahi first node ho

    // base case
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // 1 2 3  head is 1
    Node *last = head;
    // last node mai head ko save kar liya
    // taaki hum orginal head ko loose na kare

    /// traversing till last node
    while (last->next != NULL)
    {
        last = last->next;
    }
    // 1 2 3 ->4
    last->next = newNode;
}

//////////////////////////////////////////////////////////////////////

void insertAtPosition(Node *&head, int newData, int position)
{

    ////if the position is less then 1
    if (position < 1)
        return;

    //////create a new node with new data
    Node *newNode = new Node();
    newNode->data = newData;

    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    /// traverse to the node tahat will be present just before the new node
    ///  head ko save kar lenge
    Node *temp = head;

    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        // postion is greater than the length of the list
        cout << "jo tune psoition you have give is greater the the size of list";
    }

    // newNode->next = temp->next; ensures that newNode points to the next node that temp was originally pointing to.
    // temp->next = newNode; inserts newNode after temp by making temp point to newNode

    // temp is already pointing to the node after which we want to insert newNode.

    newNode->next = temp->next;
    /// newNode -> 3
    temp->next = newNode;
    // 2->6->3
}

void deleteNodeByKey(Node *&head, int key)
{
    // head ko temp mai store kar liya
    Node *temp = head;
    Node *prev = nullptr;

    ////when the deleting node is the first node
    if (temp != nullptr && temp->data == key)
    {
        /// will make next node as head
        head = temp->next;
        // deallocate the memory
        delete temp;
        return;
    }

    /// find the key to be deleted
    while (temp != nullptr && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // agar key not found
    if (temp == nullptr)
    {
        cout << "Key not found" << endl;
        return;
    }

    prev->next = temp->next;

    // deallocate the memory
    delete temp;
}

void deleteNodeByPosition(Node *&head, int position)
{
    if (head == nullptr)
        return;

    /// head ko store kar liya
    Node *temp = head;

    if (position == 1)
    {
        head = temp->next;
        delete temp;
        return;
    }

    for (int i = 1; temp != nullptr && i < position - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr)
        return;

    Node *next = temp->next->next;
    delete temp->next;
    temp->next = next;
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
    insertAtBegining(head, 0);
    insertAtEnd(head, 4);
    insertAtEnd(head, 9);

    insertAtPosition(head, 6, 7);

    printList(head);
    cout << endl;

    bool ans = search(head, 9);
    cout << ans << " if 1 present else 0" << endl;

    // deleteNodeByKey(head, 6);
    deleteNodeByPosition(head, 7);
    cout << endl;
    printList(head);
    // cout << endl;

    // Node *newhead = reverse(head);
    // printList(newhead);
    return 0;
}