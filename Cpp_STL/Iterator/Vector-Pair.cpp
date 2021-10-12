#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    cout << "\n======SHORTCUT FOR VECTOR (auto)======\n";
    vector<int> vt = {1, 2, 3, 4, 5};
    auto a = vt.begin();
    auto b = vt.end(); //point next of last
    cout << *a << " " << *(b - 1) << endl;
    cout << "Output of begin and end: ";
    for (auto i = vt.begin(); i != vt.end(); i++) //never use
        cout << *i << " ";

    cout << "\nTake Copy of emement in vector and print => ";
    for (auto i : vt)
        i++; //NO use as it is copy
    for (auto i : vt)
        cout << i << " ";
    cout << "\nrefrence in vector and print => ";
    for (auto &i : vt)
        i++; //work and
    for (auto i : vt)
        cout << i << " ";

    cout << "\n======SHORTCUT FOR PAIR (auto)========\n";

    vector<pair<int, int>> vp = {{1, 3}, {3, 6}, {7, 2}};
    //iteratiors
    vector<pair<int, int>>::iterator it, it1;
    cout << "using iterators => " << endl;
    for (it = vp.begin(); it != vp.end(); it++)
    {
        cout << "usng (*it).first " << (*it).first << " " << (*it).second << endl;
        cout << "using it->first " << it->first << " " << it->second << endl;
    }

    //shortcut to write
    for (auto &i : vp)
    {
        cout << "using auto &i " << i.first << " " << i.second << endl;
    }
    return 0;
}