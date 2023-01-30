#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{

    cout << "\n===========Vectors==========\n";
    vector<int> arr = {25, 5, 5, 4, 8, 7};
    int n = 6;

    sort(arr.begin(), arr.end());
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    //* need sorted vector // log (n) lb ub fun
    //* in array case return pointer
    //* in vector, stl case return it
    // LOWER BOUND => return (if value present return iterator of that value
    //                        else return iterator of just next grater value)
    // UPPER BOUND => ruturn (if value present return iterator of just grater value)
    //  used in set as s.lower_bound(num);
    //  used in map as m.lower_bound(num); //? apply on key only

    auto ptr = lower_bound(arr.begin(), arr.end(), 6); //(arr + index , arr + n, 6);
    cout << "LB OF 6 => " << *ptr << endl;
    cout << "LB OF 5 => " << *(lower_bound(arr.begin(), arr.end(), 5)) << endl;
    cout << "LB OF 2 => " << *(lower_bound(arr.begin(), arr.end(), 2)) << endl;
    auto p1 = (lower_bound(arr.begin(), arr.end(), 26)); // it will return nth pointer
    if (p1 == (arr.end()))
    {
        cout << "LB OF 26 not found " << endl;
    }
    cout << "\n==========================\n";
    ptr = upper_bound(arr.begin(), arr.end(), 6); //(arr + index , arr + n, 6);
    cout << "UB OF 6 => " << *ptr << endl;
    cout << "UB OF 5 => " << *(upper_bound(arr.begin(), arr.end(), 5)) << endl;
    cout << "UB OF 2 => " << *(upper_bound(arr.begin(), arr.end(), 2)) << endl;
    p1 = (upper_bound(arr.begin(), arr.end(), 26)); // it will return nth pointer
    if (p1 == (arr.end()))
    {
        cout << "UB OF 26 not found " << endl;
    }

    // cout << "\n===========Array==========\n";

    // int arr[6] = {25, 5, 5, 4, 8, 7};
    // int n = 6;

    // sort(arr, arr + n);
    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // // need sorted array // log (n) lb ub fun
    // // in array case return pointer
    // // in vector case return it
    // int *ptr = lower_bound(arr, arr + n, 6); //(arr + index , arr + n, 6);
    // cout << "LB OF 6 => " << *ptr << endl;
    // cout << "LB OF 5 => " << *(lower_bound(arr, arr + n, 5)) << endl;
    // cout << "LB OF 2 => " << *(lower_bound(arr, arr + n, 2)) << endl;
    // int *p1 = (lower_bound(arr, arr + n, 26)); // it will return nth pointer
    // if (p1 == (arr + n))
    // {
    //     cout << "not found " << endl;
    // }
    // cout << "\n==========================\n";
    // ptr = upper_bound(arr, arr + n, 6); //(arr + index , arr + n, 6);
    // cout << "UB OF 6 => " << *ptr << endl;
    // cout << "UB OF 5 => " << *(upper_bound(arr, arr + n, 5)) << endl;
    // cout << "UB OF 2 => " << *(upper_bound(arr, arr + n, 2)) << endl;
    // p1 = (upper_bound(arr, arr + n, 26)); // it will return nth pointer
    // if (p1 == (arr + n))
    // {
    //     cout << "not found " << endl;
    // }
    return 0;
}


