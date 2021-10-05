#include <iostream>
using namespace std;

int main(){
    cout<<"Enter size of matrix ";
    int n;
    cin>>n;
    int a[n][n];
    int b[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"Enter the "<<i<< " & "<<j<< " Element of a: ";
            cin>>a[i][j];
        }
        cout<<"";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"Enter the "<<i<< " & "<<j<< " Element of b: ";
            cin>>b[i][j];
        }
        cout<<"";
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]+b[i][j]<<" ";
        }

        cout<<""<<endl;
    }

    


return 0;
}