/*=============== START WRITING HEAR == BY OM MAPARI ===============*/

#include <bits/stdc++.h>
using namespace std;

vector<int> prod(vector<int> &v)
{
    int n = v.size();
    vector<int> lprod(v.size());

    lprod[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        lprod[i] = lprod[i - 1] * v[i];
    }
    int p = 1;
    lprod[n - 1] = lprod[n - 2];
    for (int i = n - 1; i > 0; i--)
    {

        lprod[i] = lprod[i - 1] * p;
        p = p * v[i];
    }
    lprod[0] = p;

    return lprod;
}


int main()
{

    cout << "=== CHAR <-> INT ===" << endl;
    char a = '4';
    int i = a - '0';
    cout << i * 2 << endl;

    string s = "123456";
    for (auto i : s) cout << (i - '0') * 2 << " ";
    cout << endl;


    cout << "\n=== STRING <-> INT ===" << endl;
    string str1 = "123"; //from string
    int num ;
    num = stoi(str1);
    cout << num << endl;

    char str2[] = "456"; //from char array
    num = stoi(str2);
    cout << num * 2 << " " << endl;

    num = 123;
    str1 = to_string(num); //to string
    cout << str1 << endl;

    cout << "\n=== STRING <-> FLOAT ===" << endl;
    string str3 = "123.456";
    float num_float = stof(str3);
    cout << num_float << endl;

    char str4[] = "123.456";
    num_float = stof(str4);
    cout << num_float * 2 << endl;

    num_float = 123.1;
    str3 = to_string(num_float);
    cout << str3 << endl;

}

