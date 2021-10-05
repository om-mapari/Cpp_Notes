#include <iostream>
using namespace std;
int main()
{
    int a[5] = {5, 1, 15, 20, 25};
    int i, j, m, n;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    n = a[++i];

    cout << i << " " << j << " " << m << " " << n << " " << endl;
    return 0;
}