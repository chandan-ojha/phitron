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

void take_input(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void insert_at_position(Node *head, int index, int v)
{
    Node *newNode = new Node(v);

    Node *tmp = head;

    for (int i = 1; i <= index - 1; i++)
    {
        tmp = tmp->next;

        if (tmp == NULL)
        {
            cout << "Invalid" << endl;

            return;
        }
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    int val;
    Node *head = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        take_input(head, val);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int index, v;
        cin >> index >> v;
        insert_at_position(head, index, v);
        print_linked_list(head);
        cout << endl;
    }

    return 0;
}
