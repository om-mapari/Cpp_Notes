#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void Printpair(vector<pair<int, int>> &v)
{
    cout << "size = " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

int main()
{
    pair<int, string> p;
    p = {3, "a"};

    cout << p.first << " " << p.second << endl;

    vector<pair<int, int>> vp;
    vp = {{3, 4}, {1, 5}};
    vp.push_back({5, 1});
    Printpair(vp);

    cout << "\n========= every datatype in stl is compariable ========\n";
    pair<int, int> p1, p2;
    p1 = {2, 3}; //initially .first compair if equal then .second compair
    p2 = {2, 4};
    cout << (p2 < p1) << endl;

    cout << "\n========= make pair function  ========\n";
    pair<int, char> foo;
    pair<int, int> bar;

    foo = make_pair(1, 'A');
    bar = make_pair(100, 3);

    cout << "foo: " << foo.first << ", " << foo.second << '\n';
    cout << "bar: " << bar.first << ", " << bar.second << '\n';



    cout << "\n======SHORTCUT FOR PAIR (auto)========\n";

    vector<pair<int, int>> vp = {{1, 3}, {3, 6}, {7, 2}};
    //iteratiors
    vector<pair<int, int>>::iterator it, it1; // this is how define iterators
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
    
}