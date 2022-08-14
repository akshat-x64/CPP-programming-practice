// swap 2 numbers
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1,num2,temp;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
    cout<<"The number before swap num1 "<<num1<<" and num2 is "<<num2<<endl;
    // temp = num1; 
    // num1 = num2; 
    // num2 = temp; 

    num1 = num1+num2;
    num2 = num1 -num2;
    num1 = num1 -num2;
    cout<<"The number after swap num1 "<<num1<<" and num2 is "<<num2<<endl;
    return 0;
}
