#include<iostream>

using namespace std;
int GetOperatorWeight(char op)
{
	int weight = -1; 
	switch(op)
	{
	case '+':
	case '-':
		weight = 1;
        return weight;
	case '*':
	case '/':
		weight = 2;
        return weight;
	case '$':
		weight = 3;
        
	}
	return weight;
}
int main(){
    // cout<<"This is tutorial 9";
    char age;
    cout<< "Tell me your age"<<endl;
    cin>>age;
    cout<<" result "<< GetOperatorWeight(age);
    // 1. Selection control structure: If else-if else ladder
    // if((age<18) && (age>0)){
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }

    // 2. Selection control structure: Switch Case statements
    // switch (age) 
    // {
    // case 18: //only char constent or int constant
    //     cout<<"You are 18"<<endl;
    //     break;
    // case 22: 
    //     cout<<"You are 22"<<endl;
        
    // case 2: 
    //     cout<<"You are 2"<<endl;
    //     break;

    // default:
    // cout<<"No special cases"<<endl;
    //     break;
    // }

    // cout<<"Done with switch case";
    // return 0;
}
