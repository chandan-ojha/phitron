#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    stack<int> newStack;
    while (!myStack.empty())
    {
        newStack.push(myStack.top());
        myStack.pop();
    }
    newStack.push(x);
    while (!newStack.empty())
    {
        myStack.push(newStack.top());
        newStack.pop();
    }
    return myStack;
}