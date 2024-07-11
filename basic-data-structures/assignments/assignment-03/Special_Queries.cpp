#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;

    queue<string> myQueue;

    for (int i = 0; i < q; i++)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            string name;
            cin >> name;
            myQueue.push(name);
        }
        else if (command == 1)
        {
            if (myQueue.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << myQueue.front() << endl;
                myQueue.pop();
            }
        }
    }

    return 0;
}