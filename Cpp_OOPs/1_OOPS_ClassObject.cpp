#include<iostream>
using namespace std;
//class --> template
//obj   --> instences / runtime entities
//attribute --> methods + variables

class Employee
{
    private:
        int a, b, c; //only function can access
    public:
        int d, e; 
        void setData(int a1, int b1, int c1); // Declaration of method
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){//Scope resoluation oprator
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee harry;
    // harry.a = 134; -->This will throw error as a is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData(); //private data is access by only methods in class
    return 0;
}
