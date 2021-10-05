#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    ofstream out;
    out.open("abc.txt");
    out<<"Om Mapari";
    out<<"\n20 Year old";
    out<<"\nlike coding";
    out.close();

    ifstream in;
    in.open("abc.txt");
    string st,st2;
    // in>>st>>st2;
    // cout<<st<<st2;

    while (in.eof()==0)//to read full line
    {
        getline(in,st);
        cout<<st<<endl;
    }
    

    in.close();

    return 0;
}