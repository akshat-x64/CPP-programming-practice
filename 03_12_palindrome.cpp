// check a number is palindrone or not 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num,num1=0,num2=0,num3=0;
    cout<<"Enter the value a value to chec its palindrome or not"<<endl;
    cin>>num;
    num1 = num;
    while (num1>0)
    {
        num2 = num1%10;
        num1 = num1/10;
        num3 = num3*10+num2;
    }
    if (num3 == num)
    {
        cout<<"The number is palindrome "<<num<<endl;

    }
    else{
        cout<<"The number not is palindrome "<<num<<endl;
    }
    
    return 0;
}
