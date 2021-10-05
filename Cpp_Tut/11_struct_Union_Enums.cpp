#include<iostream>
using namespace std;
//user difine data type
typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    // enum Meal{ breakfast, lunch, dinner};
    // Meal m1 = lunch;
    // cout<<(m1==2);
    // // cout<<breakfast;
    // // cout<<lunch;
    // // cout<<dinner; 
    // // union money m1;
    // // m1.rice = 34;
    // // m1.car = 'c';
    // // cout<<m1.car;

    ep harry; //using typedef
    employee shubham; //best way to write
    harry.eId = 1;
    shubham.eId=3;
    harry.favChar = 'c';
    harry.salary = 120000;
    cout<<"The value is "<<harry.eId<<endl; 
    cout<<"The value is "<<harry.favChar<<endl; 
    cout<<"The value is "<<harry.salary<<endl; 
    cout<<"value = "<<shubham.eId<<endl;
    return 0;
}
