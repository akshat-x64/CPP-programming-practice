// demonstration of function which does addtion of 2 integers
#include<iostream>
using namespace std;
int add_int(int a,int b){
    return a+b;
}
int main(int argc, char const *argv[])
{
    int num1,num2,sum;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;

    sum = add_int(num1,num2);
    cout<<"The addition of 2 integers is "<<sum<<endl;    
    return 0;
}
