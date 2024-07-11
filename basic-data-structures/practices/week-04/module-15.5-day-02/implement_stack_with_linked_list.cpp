/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    // Write your code here

public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    Stack()
    {
        // Write your code here
    }

    int getSize()
    {
        return sz;
    }

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

    void push(int data)
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

    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }

    int getTop()
    {
        if (!isEmpty())
        {
            return tail->data;
        }
        else
        {
            return -1;
        }
    }
};