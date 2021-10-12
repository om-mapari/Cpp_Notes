#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void PrintMaps(unordered_map<int, string> &m)
{
    // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    cout << "size: " << m.size() << endl;
    for (auto pair : m)
        cout << pair.first << " " << pair.second << " | ";
}
int main()
{
    //All function same
    unordered_map<int, string> m;
    m[1] = "abc"; //  O(log(n))
    m[5] = "ded";
    m[3] = "efd";
    m[5] = "sof";         // overwrite
    m.insert({2, "omm"}); // map store pair
    PrintMaps(m);

    cout << "\n=================================\n";
    auto f = m.find(5); // O(log(n))
    cout << "find 5 => ";
    if (f == m.end())
        cout << " not exist ";
    else
        cout << f->first << " exist value = " << f->second;

    cout << "\n=================================\n";
    cout << "erase 3 => ";
    auto er = m.find(3);
    m.erase(3); //input => key or it // O(log(n))
    // if (er != m.end())
    //     m.erase(er);
    PrintMaps(m);

    cout << "\n=============Access=================\n";
    cout << "2 key value => " << m[2] << endl;
    cout << "2 key value => " << m[10] << endl; //cant access
    return 0;
}