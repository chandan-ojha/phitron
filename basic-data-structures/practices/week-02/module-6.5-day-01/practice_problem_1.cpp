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
        cout << "Option 3: Terminate" << endl;

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
            break;
        }
    }

    return 0;
}