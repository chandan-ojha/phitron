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

void duplicate_value_check(Node *head)
{
    int count[101] = {0};

    Node *tmp = head;

    while (tmp != NULL)
    {
        count[tmp->val]++;

        if (count[tmp->val] > 1)
        {
            cout << "YES" << endl;
            return;
        }

        tmp = tmp->next;
    }

    cout << "NO" << endl;
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

    duplicate_value_check(head);

    return 0;
}
