#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
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

void check_same(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    int flag = 1;

    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            flag = 0;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head1, tail1, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head2, tail2, val);
    }

    int li_size1 = size(head1);
    int li_size2 = size(head2);

    if (li_size1 != li_size2)
    {
        cout << "NO" << endl;
    }
    else
    {
        check_same(head1, head2);
    }

    return 0;
}