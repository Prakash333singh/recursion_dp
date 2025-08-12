#include <bits/stdc++.h>
using namespace std;

class ListNode
{

public:
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};
void printNode(ListNode *head)
{
    ListNode *curr = head;
    while (curr != NULL)
    {
        /* code */
        cout << curr->val << "->";
        curr = curr->next;
    }
    cout << "null" << endl;
}

ListNode *InsertatFirst(int val, ListNode *head)
{
    /// creating a new node with given val
    ListNode *newNode = new ListNode(val);

    newNode->next = head;

    head = newNode;
    return head;
}

void insertionAtNth(ListNode *&head, int val, int position)
{
    ListNode *newNode = new ListNode(val);

    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    ListNode *temp = head;

    for (int i = 1; i < position - 1 && temp != nullptr; ++i)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "The previous node is null." << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    ListNode *head = NULL;
    // head = InsertatFirst(40, head);
    // head = InsertatFirst(30, head);
    // head = InsertatFirst(20, head);
    // head = InsertatFirst(10, head);
    // head = InsertatFirst(50, head);
    // head = InsertatFirst(60, head);

    // printNode(head);
    // head = InsertatFirst(69, head);
    // printNode(head);

    insertionAtNth(head, 2, 1); // List: 2
    insertionAtNth(head, 3, 2); // List: 2 3
    insertionAtNth(head, 4, 1); // List: 4 2 3
    insertionAtNth(head, 5, 3); // List: 4 2 5 3

    printList(head);
}