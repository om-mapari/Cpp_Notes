#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    //initlization
    //int arr[5] = {0};
    //int arr[][]

    int m = 3, n = 5;
    int arr[m][n];
    memset(arr, -1, sizeof(arr));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int a[8] = {0};
    // fore(i, a) cout << i << " ";
    cout << endl;

    return 0;
}