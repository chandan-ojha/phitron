#include <bits/stdc++.h>
// Implement class for minStack.
class minStack
{
    list<int> li;
    list<int> mli;

public:
    // Constructor
    minStack()
    {
        // No initialization needed here.
    }

    // Function to add another element equal to num at the top of stack.
    void push(int num)
    {
        li.push_back(num);
        if (mli.size() == 0 || num <= mli.back())
        {
            mli.push_back(num);
        }
    }

    // Function to remove the top element of the stack.
    int pop()
    {
        if (li.size() != 0)
        {
            int topElement = li.back();
            li.pop_back();

            if (topElement == mli.back())
            {
                mli.pop_back();
            }

            return topElement;
        }
        else
        {
            return -1;
        }
    }

    // Function to return the top element of stack if it is present. Otherwise return -1.
    int top()
    {
        if (li.size() != 0)
        {
            return li.back();
        }
        else
        {
            return -1;
        }
    }

    // Function to return the minimum element of stack if it is present. Otherwise return -1.
    int getMin()
    {
        if (mli.size() != 0)
        {
            return mli.back();
        }
        else
        {
            return -1;
        }
    }
};