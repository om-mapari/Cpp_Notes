#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void printSet(set<string> &s)
{
    cout << "size: " << s.size() << " => ";
    for (auto &i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    set<string> s;
    s.insert("abc"); //log(n)
    s.insert("zkd");
    s.insert("ijk");
    s.insert("kff");
    s.insert("abc");
    printSet(s);

    cout << "\n=========find and erase=============\n";
    auto it = s.find("zkd");
    if (it != s.end())
    {
        cout << "zkd => " << *it << endl;
        //s.erase(it) //it pointing will erase
    }
    s.erase("ijk"); //direct value or it can be used
    printSet(s);

    cout << "\n=============== maximum ==============\n";
    it = --s.end(); //* IMPORTENT
    cout << "Maximum i.e last element is = " << *it << endl;

    return 0;
}