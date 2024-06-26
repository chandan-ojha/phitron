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

int linked_list_size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}

void print_middle_element(Node *head)
{
    Node *tmp = head;

    int size = linked_list_size(head);

    if (size % 2 != 0)
    {
        int mid_el = size / 2;

        for (int i = 0; i < mid_el; i++)
        {
            tmp = tmp->next;
        }

        cout << tmp->val << endl;
    }
    else
    {
        int mid_el = size / 2 - 1;

        for (int i = 0; i < mid_el; i++)
        {
            tmp = tmp->next;
        }

        cout << tmp->val << " " << tmp->next->val << endl;
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

    print_middle_element(head);

    return 0;
}
