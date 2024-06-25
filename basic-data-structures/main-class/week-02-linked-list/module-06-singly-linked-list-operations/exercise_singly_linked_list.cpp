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

void count_linked_list_size(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    cout << "Linked List Size: " << count << endl
         << endl;
}

void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";

    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted at head"
         << endl
         << endl;
}

void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);

    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;

        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }

    newNode->next = tmp->next;
    tmp->next = newNode;

    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Head is not available" << endl
             << endl;
        return;
    }

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl
         << "Deleted head " << endl
         << endl;
}

void delete_tail(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Head is not available" << endl
             << endl;
        return;
    }

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        cout << endl
             << "Deleted Tail" << endl
             << endl;
        return;
    }

    Node *tmp = head;

    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next;
    delete deleteNode;
    tmp->next = NULL;

    cout << endl
         << "Deleted Tail" << endl
         << endl;
}

void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;

        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << endl
             << "Invalid Index" << endl
             << endl;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl
         << "Deleted position "
         << pos << endl
         << endl;
}

int main()
{
    int val;
    Node *head = NULL;

    cout << "Take Input: ";

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        take_input(head, val);
    }

    while (true)
    {
        cout << "Option 1: Count Linked List Size" << endl;
        cout << "Option 2: Display Linked List" << endl;
        cout << "Option 3: Insertion at Head" << endl;
        cout << "Option 4: Insertion at Tail" << endl;
        cout << "Option 5: Insertion at Specific Position" << endl;
        cout << "Option 6: Deletion at Head" << endl;
        cout << "Option 7: Deletion at Tail" << endl;
        cout << "Option 8: Deletion at a Specific Position" << endl;
        cout << "Option 9: Terminate" << endl;

        int op;
        cin >> op;

        if (op == 1)
        {
            count_linked_list_size(head);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            cout << "Enter value: ";
            cin >> val;
            insert_at_head(head, val);
        }
        else if (op == 4)
        {
            cout << "Enter value: ";
            cin >> val;
            take_input(head, val);
        }
        else if (op == 5)
        {
            int pos, val;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_position(head, pos, val);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            delete_tail(head);
        }
        else if (op == 8)
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;

            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if (op == 9)
        {
            break;
        }
    }

    return 0;
}