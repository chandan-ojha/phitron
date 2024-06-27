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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int size(Node *head)
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
    int lin_size = size(head);

    Node *tmp = head;

    if (lin_size % 2 != 0)
    {
        int mid = lin_size / 2;

        for (int i = 1; i <= mid; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << endl;
    }
    else
    {
        int mid = lin_size / 2 - 1;

        for (int i = 1; i <= mid; i++)
        {
            tmp = tmp->next;
        }

        cout << tmp->val << " " << tmp->next->val << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }

    print_middle_element(head);
    return 0;
}