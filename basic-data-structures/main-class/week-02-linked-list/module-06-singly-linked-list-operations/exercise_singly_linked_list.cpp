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

    while (true)
    {
        cout << "Option 1: Take Input" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Terminate" << endl;

        int op;
        cin >> op;

        if (op == 1)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            take_input(head, val);
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