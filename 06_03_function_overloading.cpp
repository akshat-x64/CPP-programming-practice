// demonstration of function overloadin
#include<iostream>
using namespace std;
int add_variable(int a,int b){
    return a+b;
}
float add_variable(float a,float b){
    return a+b;
}
int main(int argc, char const *argv[])
{
    float num1,num2,sum;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
    sum = add_variable((num1),(num2));
    cout<<"The addition of 2 variables "<<sum<<endl;
    return 0;
}
