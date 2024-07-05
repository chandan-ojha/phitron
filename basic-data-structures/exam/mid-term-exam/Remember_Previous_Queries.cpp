#include <bits/stdc++.h>
using namespace std;

void print_left_to_right(list<int> &myList)
{
    cout << "L -> ";
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;
}

void print_right_to_left(list<int> &myList)
{
    list<int> newList = myList;
    newList.reverse();

    cout << "R -> ";
    for (int val : newList)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;

    list<int> myList;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            myList.push_front(v);
        }
        else if (x == 1)
        {
            myList.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < myList.size())
            {
                myList.erase(next(myList.begin(), v));
            }
        }

        print_left_to_right(myList);
        print_right_to_left(myList);
    }

    return 0;
}