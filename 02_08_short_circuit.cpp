//testing short circuit
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1=20 , num2=10;
    // cout<<"Enter the value of num1"<<endl;
    // cin>>num1;
    // cout<<"Enter the value of num2"<<endl;
    // cin>>num2;
    if (num1> num2 && num1>num2++ )
    {
        cout<<"num1 is greater"<<endl;
        cout<<"The value of num2 is "<<num2<<endl;
    }
    
    return 0;
}
