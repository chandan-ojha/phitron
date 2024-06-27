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
void insert_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
    {
        tail = head;
    }
}

void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void delete_val(Node *&head, Node *&tail, int v)
{
    if (head == NULL)
    {
        return;
    }

    if (v == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete deleteNode;
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < v - 1; i++)
    {
        if (tmp == NULL || tmp->next == NULL)
        {
            return;
        }
        tmp = tmp->next;
    }

    if (tmp->next == NULL)
    {
        return;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    if (tmp->next == NULL)
    {
        tail = tmp;
    }
    delete deleteNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_val(head, tail, v);
        }
        print_linked_list(head);
    }

    return 0;
}