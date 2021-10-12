#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void PrintVector(vector<int> &v)
{
    for (auto &&i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{

    /*
    1) The last element => v[v.size() - 1]
    2) v.erase(v.begin() + index ) // 1 value only
    3) v.erase(v.begin()+ 2 ,v.begin()+ 5) // put inside range
        ex. {4,2,7,9,3,1,9} => {4,2,1,9}
    4) v.emplace(v.begin() + index ,data); // put and shift froward
    5) v.reverse(v.begin(),v.end()) // put inside range
    6) int max = *max_element(v.begin(), v.end());
    8) v.insert(v.begin + 1, 8) // insert 8 at 1st index
    9) v.begin() -> 0th index || v.end() -> next to last || v.end()-1 -> last index
    10) v.sort(v.begin(),v.end())
    11) v.clear()
    12) v.empty()
    13) v.fornt() || v.back()
    */

    /* DEFINE */
    vector<int> v;
    vector<int> v1(5);        //size init all values as 0
    vector<bool> v2(5, true); //size init vactor values...

    v.push_back(1);
    cout << "Capacity => " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity => " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity => " << v.capacity() << endl;
    v.push_back(4);
    v.push_back(5);
    cout << "size " << v.size() << endl;

    cout << "===============================\n";
    v.pop_back();
    cout << "after pop size " << v.size() << endl;

    v.resize(10);
    cout << "after resize size " << v.size() << endl; //other are zero

    PrintVector(v);

    v.clear();
    cout << "after clear size " << v.size() << endl;
    cout << "Is Empty " << v.empty() << endl;

    cout << "===============================\n";
    cout << "Push values 1 2 3 4 5" << endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << "erase 1st index => ";
    v.erase(v.begin() + 1);
    PrintVector(v);

    vector<int> temp = {4, 2, 7, 9, 3, 1, 9};
    cout << ("Erase from range {4,2,7,9,3,1,9} => ");
    // temp.erase(temp.begin() + 1, temp.end() - 2);
    temp.erase(temp.begin() + 2, temp.begin() + 5);
    //v.erase(v.begin() + index, v.end());
    PrintVector(temp);

    cout << "insert 8 at 1st index => ";
    v.insert(v.begin() + 1, 8);
    PrintVector(v);
    cout << "Reverse array => ";
    reverse(v.begin(), v.end());
    PrintVector(v);

    cout << "Sort array => ";
    sort(v.begin(), v.end());
    PrintVector(v);

    int max = *max_element(v.begin(), v.end());
    cout << "Maximum Value = " << max;
    cout << "\nElement At Back = " << v.back();
    int nOf = v.size();
    cout << "\nThe last element is: " << v[nOf - 1];
    cout << "\nElement At Front = " << v.front();
    cout << "\nMaximum value in array = " << max;

    // v.emplace(v.begin()+position,data);
    cout << "\nEmplace element 13 at 2nd index => ";
    v.emplace(v.begin() + 2, 13);
    PrintVector(v);

    //copy
    vector<int> copy = v; //O(n)
    cout << "\nCopy of vector O(n)=> ";
    PrintVector(copy);

    cout << "\n=========POINTERS===========\n";
    cout << "begin => " << *v.begin() << " & end => " << *(v.end() - 1) << "\n";
    cout << "1st index => " << *(v.begin() + 1) << " & 2nd last index" << *(v.end() - 2) << "\n";
}
