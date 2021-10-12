#include <iostream>
using namespace std;
#include <bits/stdc++.h>
//given an n strings, print unique string
//in incresing order with their freq

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