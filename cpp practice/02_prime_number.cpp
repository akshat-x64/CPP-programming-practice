#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1, num2 = 0, num3 = 0, num4 = 0;
    cout << "Enter a number";
    cin >> num1;
    num2 = num1;
    num3 = 2;
    while (num3 < num2)
    {
        if (num2 % num3 == 0)
        {
            num4 = 1;
            break;
        }

        num3++;
    }
    if (num4 == 1)
    {
        cout << "The given number is not prime number " << num1;
    }
    else
    {
        cout << "The given number is prime number " << num1;
    }
    return 0;
}
