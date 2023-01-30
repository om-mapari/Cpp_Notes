#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void printPair(vector<pair<int, int>> &vp)
{
    for (auto i : vp)
    {
        cout << i.first << " " << i.second << " | ";
    }
    cout << endl;
}
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    return a.second > b.second;
}
int main()
{

    cout << "=======Sorting for array and vector===========" << endl;
    int arr[6] = {4, 5, 2, 25, 7, 8};
    int n = 6;
    //sort(arr + index, last pointer);
    sort(arr + 2, arr + n); //sort 2thd index to end
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(arr, arr + n);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> v = {4, 5, 2, 1, 7, 9};
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "\n============Comparator funcition===========" << endl;
    vector<pair<int, int>> vp = {{4, 3}, {5, 5}, {5, 3}, {25, 6}, {5, 9}, {8, 5}};
    cout << "Normal Sort: ";
    sort(vp.begin(), vp.end());
    printPair(vp);
    sort(vp.begin(), vp.end(), cmp);
    cout << "Sort AD ord: ";
    printPair(vp);
    return 0;
}