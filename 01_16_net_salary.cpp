// calculate net salary
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float basic_salary,percentange_allowence,percentange_debuction,net_salary;
    cout<<"Enter the salary"<<endl;
    cin>>basic_salary;
    cout<<"Enter the percentage allowence"<<endl;
    cin>>percentange_allowence;
    cout<<"Enter the percentage debuction"<<endl;
    cin>>percentange_debuction;
    net_salary = basic_salary+basic_salary*percentange_allowence/100-basic_salary*percentange_debuction/100;
    cout<<"The net salary is "<<net_salary;
    
    
    return 0;
}
