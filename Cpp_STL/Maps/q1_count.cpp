#include <iostream>
using namespace std;
#include <bits/stdc++.h>
//given an n strings, print unique string
//in incresing order with their freq

// use unordered map if order not matter
int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++; // s = key and value++ doing
    }
    for (auto &i : m)
    {
        cout << i.first << " " << i.second << " | ";
    }

    return 0;
}
// using map
// 6
// h e z e h a
// a 1 | e 2 | h 2 | z 1 | 

// using unordered_map
// 6
// h e z e h a
// z 1 | a 1 | h 2 | e 2 | 