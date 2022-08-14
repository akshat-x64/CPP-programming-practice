// maximum of 3 number using logical operator
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1, num2, num3;
    cout << "Enter the value of num1" << endl;
    cin >> num1;
    cout << "Enter the value of num2" << endl;
    cin >> num2;
    cout << "Enter the value of num3" << endl;
    cin >> num3;

    if (num1>num2 && num1>num3)
    {
        cout<<"The maximum  number is "<<num1<<endl;
    }
    else if (num2>num1 && num2>num3)
    {
        cout<<"The maximum  number is "<<num2<<endl;
    }
    else if (num3>num2 && num3>num1)
    {
        cout<<"The maximum  number is "<<num3<<endl;
    }
    return 0;
}
