#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void printSet(multiset<string> &s)
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
    // set vs multiset
    // multiset allow us to use multi_values dublicates
    // use it as priority queue
    cout << "\n========= inserts ========\n";
    multiset<string> ms;
    ms.insert("abc");
    ms.insert("kif");
    ms.insert("jdif");
    ms.insert("abc");
    ms.insert("abc");
    ms.insert("kif");
    printSet(ms);

    cout << "\n========= delete ========\n";
    auto it = ms.find("abc");
    if (it != ms.end()) //? Always use this
        ms.erase(it);   //delete just one abc where it point

    ms.erase("kif"); //delete both "kif" // logn
    printSet(ms);

    return 0;
}