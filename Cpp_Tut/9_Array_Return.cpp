#include <iostream>
using namespace std;
int *RemoveD(int *a, int n)
{
    int *temp = new int[n];
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            temp[j++] = a[i];
        }
    }
    temp[j] = a[n - 1];
    return temp;
}
int main()
{
    int m = 8;
    int arr1[] = {1, 2, 2, 3, 3, 4, 5, 5};

    int *arr2 = RemoveD(arr1, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}