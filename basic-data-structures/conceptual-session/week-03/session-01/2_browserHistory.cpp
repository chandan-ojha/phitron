#include <bits/stdc++.h>
using namespace std;

class BrowserHistory
{
public:
    class Node
    {
    public:
        string data;
        Node *next;
        Node *prev;

        Node(string data)
        {
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
    };

    Node *current = new Node(" ");

    BrowserHistory(string homepage)
    {
        current->data = homepage;
    }

    void visit(string url)
    {
        Node *newNode = new Node(url);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }

    string back(int steps)
    {
        for (int i = 0; i < steps; i++)
        {
            if (current->prev != NULL)
            {
                current = current->prev;
            }
        }
        return current->data;
    }

    string forward(int steps)
    {
        for (int i = 0; i < steps; i++)
        {
            if (current->next != NULL)
            {
                current = current->next;
            }
        }
        return current->data;
    }
};