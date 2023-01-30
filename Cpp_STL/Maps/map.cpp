#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void PrintMaps(map<int, string> &m)
{
    cout << "\nsize: " << m.size() << endl; //? in map their are pairs
    for (auto pair : m)
        cout << pair.first << " " << pair.second << " | ";
}
int main()
{
    cout << "\n============insert 2 ways========";
    //map< Key, value> m;
    map<int, string> m;
    m[1] = "abc"; //  log(n)
    m[5] = "ded";
    m[3] = "efd";
    m[5] = "sof";         // overwrite value
    m.insert({2, "omm"}); // map store pair
    PrintMaps(m);
    cout << "\n===============find==============";
    auto f = m.find(5); // log(n) .find(key)
    cout << "\nfind 5 => ";
    if (f == m.end())
        cout << " not exist ";
    else
        cout << f->first << " exist value with value = " << f->second;

    cout << "\n=============access=============";

    //Access value log(n)
    cout << "\nAssess value which exist = m[5] => " << m[5];
    cout << "\nAssess value which not exist = m[-1] => " << m[-1]; // will add key -1 with null value in map in order
    PrintMaps(m);

    cout << "\n==============erase=============";
    cout << "\nerase 3 => ";
    auto er = m.find(3); // log(n)
    m.erase(3);
    // input => key or it
    // if (er != m.end())
    //     m.erase(er);
    PrintMaps(m);
    cout << "\n=================================\n";

    return 0;
}

//set two type //*saves unique
//ordered = Incresing = search insert O(log n)
//un_ordered = Random order = search insert O(1)
//* save dublicate
//multiset

//map two type //*saves unique
//ordered = Incresing = search insert O(log n)
//un_ordered = Random order = search insert O(1)