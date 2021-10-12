#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{ //reverse(v.begin()+index_start,v.begin()+index_end+1);

    //? v.fun(start Pointer,just next pointer to point we want to apply algo);
    vector<int> v = {25, 5, 5, 4, 8, 7}; //all O(N) in array
    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());
    int sum = accumulate(v.begin(), v.end(), 0); //third argu intial sum
    int ct = count(v.begin(), v.end(), 5);       //third argu no
    auto it = find(v.begin(), v.end(), 2);
    if (it != v.end())
        cout << *it << endl;
    else
        cout << "ele not found " << endl;

    reverse(v.begin(), v.end());
    string str = "abcdefg";
    reverse(str.begin(), str.end());

    // In array
    //? v.begin() -> arr
    //? v.end() -> arr + n
    //? auto it -> int *ptr

    //* need sorted vector // log (n) lb ub fun
    //* in array case return pointer
    //* in vector, stl case return it
    // LOWER BOUND => return (if value present return it of that value
    //                        else return it of just next grater value)
    // UPPER BOUND => ruturn (if value present return it of just grater value)
    //  used in set as s.lower_bound(num);
    //  used in map as m.lower_bound(num); //? apply on key only
    sort(v.begin(), v.end());
    auto ptr = lower_bound(v.begin(), v.end(), 5);   // 5
    auto ptr2 = upper_bound(v.begin(), v.end(), 5);  // 7
    auto p1 = (lower_bound(v.begin(), v.end(), 26)); // it will return last it

    cout << "\n============ all any none ============" << endl;
    // Lambda fun & all_of , none_of , any_of algo returns t or f
    vector<int> vt = {2, 4, 6, 8};
    cout << all_of(vt.begin(), vt.end(), [](int x)
                   { return x % 2 == 0; }) // all of them is even => true
         << endl;
    cout << none_of(vt.begin(), vt.end(), [](int x)
                    { return x < 0; }) // none_of them is less than 0 => true
         << endl;
    cout << any_of(vt.begin(), vt.end(), [](int x)
                   { return x < 0; }) // any_of them is less than 0 => false
         << endl;

    return 0;
}