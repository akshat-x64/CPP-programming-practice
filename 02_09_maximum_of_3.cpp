// calculation of maximum of 3 number
#include <iostream>
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
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << num1 << "  is maximum" << endl;
        }
        else
        {
            cout << num3 << "  is  maximum" << endl;
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout << num2 << "  is maximum" << endl;
        }
        else
        {
            cout << num3 << "  is maximum" << endl;
        }
    }
    return 0;
}
