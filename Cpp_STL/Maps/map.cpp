#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void PrintMaps(map<int, string> &m)
{
    cout << "size: " << m.size() << endl; //? in map their are pairs
    for (auto pair : m)
        cout << pair.first << " " << pair.second << " | ";
}
int main()
{
    cout << "\n============insert 2 ways========\n";
    //map< Key, value> m;
    map<int, string> m;
    m[1] = "abc"; //  log(n)
    m[5] = "ded";
    m[3] = "efd";
    m[5] = "sof";         // overwrite value
    m.insert({2, "omm"}); // map store pair
    PrintMaps(m);

    cout << "\n===============find==============\n";
    auto f = m.find(5); // log(n) .find(key)
    cout << "find 5 => ";
    if (f == m.end())
        cout << " not exist ";
    else
        cout << f->first << " exist value with value = " << f->second;

    cout << "\n=============access=============\n";

    //Access value log(n)
    cout << "Assess value = m[5] => " << m[5];

    cout << "\n==============erase=============\n";
    cout << "erase 3 => ";
    auto er = m.find(3); // log(n)
    m.erase(3);
    // input => key or it
    // if (er != m.end())
    //     m.erase(er);
    PrintMaps(m);
    cout << "\n=================================\n";

    return 0;
}

//set two type //save unique
//ordered = Incresing = search insert O(log n)
//un_ordered = Random order = search insert O(1)

//map two type //save unique
//ordered = Incresing = search insert O(log n)
//un_ordered = Random order = search insert O(1)