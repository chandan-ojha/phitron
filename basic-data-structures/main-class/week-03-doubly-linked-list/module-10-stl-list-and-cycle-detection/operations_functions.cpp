#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {20, 40, 30, 10, 50, 10, 10};

    // myList.remove(10);
    // sort(myList.begin(), myList.end()); // not work

    // myList.sort(); // time complexity O(NlogN)
    // myList.sort(greater<int>());
    // myList.unique();
    myList.reverse(); // time complexity O(N)

    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}