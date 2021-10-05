#include <iostream>
using namespace std;
#include <fstream>

int main ()
{
//create and write

    char arr[100];
    cout<<"Enter Your name : ";
    // cin>>arr; 
    cin.getline(arr,100); //to ger entire line input

    ofstream myfile("xyz.txt"); //by default in ios::out mode
    if(myfile.is_open())
    {
        cout<<"file opend"<<endl;
    }
    myfile<<arr;
    myfile.close();

//reading 
    ifstream obj("xyz.txt");
    char arr1[100];
    obj.getline(arr1,100);
    cout<<arr1;

    obj.close();
    

//appending    
    cout<<"Enter Your name : ";
    cin.getline(arr,100); //to get entire line input
                               //mode
    ofstream myfi("xyz.txt",ios::app);
    if(myfi.is_open())
    {
        cout<<"fi opend"<<endl;
    }
    myfi<<arr;
    myfi.close();

//reading 
    ifstream obj2("xyz.txt");
    char arr2[100];
    obj2.getline(arr2,100);
    cout<<arr2;

    obj2.close();
    return 0;    
}