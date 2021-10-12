#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void PrintDeque(deque<int> v)
{
    for (auto &&i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    PrintDeque(d);
    // d.pop_back();
    // d.pop_front();
    cout << "\nPrint first Index Element => ";
    cout << d[1] << endl;
    return 0;
}