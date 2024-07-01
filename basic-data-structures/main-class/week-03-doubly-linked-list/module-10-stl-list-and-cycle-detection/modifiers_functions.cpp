#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50, 110, 120};
    list<int> newList = {100, 200, 300};
    vector<int> v = {60, 70, 80};
    // list<int> newList;

    /*assign*/
    // newList = myList;
    // newList.assign(myList.begin(), myList.end());

    /*push*/
    // myList.push_front(5);
    // myList.push_back(100);

    /*pop*/
    // myList.pop_front();
    // myList.pop_front();
    // myList.pop_back();
    // myList.pop_back();

    /*insert*/
    // myList.insert(next(myList.begin(), 3), 100); // complexity o(n)
    // myList.insert(next(myList.begin(), 3), {100, 200, 300}); // complexity o(n)
    // myList.insert(next(myList.begin(), 3), newList.begin(), newList.end()); // complexity o(n+k)
    // myList.insert(next(myList.begin(), 3), v.begin(), v.end()); // complexity o(n+k)

    /*erase*/
    // myList.erase(next(myList.begin(), 2));
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));

    /*replace*/
    // replace(myList.begin(), myList.end(), 30, 100);

    /*find*/
    auto it = find(myList.begin(), myList.end(), 50);
    // cout << *it << endl;

    if (it == myList.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }

    return 0;
}