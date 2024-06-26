#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int size(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++) // O(N)
    {
        temp = temp->next;
    }

    // cout << temp->val << endl;

    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);
    cout << endl;

    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else
    {
        insert(head, pos, val);
    }

    print_linked_list(head);

    return 0;
}