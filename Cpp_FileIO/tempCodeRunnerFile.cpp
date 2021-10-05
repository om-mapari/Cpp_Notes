#include <iostream>
using namespace std;
#include <fstream>

int main ()
{
    char arr[100];
    cout<<"Enter Your name : ";
    cin.getline(arr,100);

    ofstream myfile("xyz.txt");
    if(myfile.is_open()){
        cout<<"file opend"<<endl;
    }
    
    return 0;
}