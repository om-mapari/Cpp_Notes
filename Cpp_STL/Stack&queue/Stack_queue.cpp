#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{

    int t;
    cin >> t;
    stack<char> s;
    queue<char> q;
    while (t--)
    {
        char ele;
        cin >> ele;
        s.push(ele);
        q.push(ele);
    }
    cout << "size: " << s.size() << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << "========\n";
    cout << "size: " << q.size() << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}