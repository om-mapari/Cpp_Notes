
#include <iostream>
using namespace std;

// Note that arr[] for function is just a pointer even if square
// brackets are used

void display(int m[]) //Same as void display(int *m)
{
    // cout<<"Size in function "<<sizeof(m)/sizeof(m[0])<<endl; --> 1
    cout << "Displaying marks: " << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }

    swap(m[0], m[4]);
}

int main()
{

    int marks[] = {88, 76, 90, 61, 69};
    cout << "Size in main " << sizeof(marks) / sizeof(marks[0]) << endl;

    display(marks); //only the name of the array is used
                    //display(marks) only address of the first element of array passed

    cout << endl
         << "After Swapping " << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }
    return 0;
}