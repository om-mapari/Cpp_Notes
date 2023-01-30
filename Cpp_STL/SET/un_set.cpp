#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// q. given N strings and Q queries
// in each queri you are given a string print yes if string
// is present else print no.

int main()
{
    unordered_set<string> s; //O(1)
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string str;
        cin >> str;
        if (s.count(str))
            cout << "yes\n";
        else
            cout << "no\n";
    }
}
// int main()
// {
//     unordered_set<string> s; //O(1)
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         string str;
//         cin >> str;
//         s.insert(str);
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         string str;
//         cin >> str;
//         if (s.find(str) == s.end())
//             cout << "no\n";
//         else
//             cout << "yes\n";
//     }
// }