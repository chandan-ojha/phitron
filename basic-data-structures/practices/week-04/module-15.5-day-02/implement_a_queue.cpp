#include <bits/stdc++.h>
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    Queue()
    {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data)
    {
        sz++;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }

    int dequeue()
    {
        if (sz == 0)
        {
            return -1;
        }
        sz--;
        Node *deleteNode = head;
        int removedData = deleteNode->data;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
        return removedData;
    }

    int front()
    {
        if (!isEmpty())
        {
            return head->data;
        }
        else
        {
            return -1;
        }
    }
};