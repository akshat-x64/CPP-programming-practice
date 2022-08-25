#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1, num2 = 0, num3 = 0, num4 = 0;
    cout << "Enter a number";
    cin >> num1;
    num2 = num1;
    while (num2 > 0)
    {
        num3 = num2 % 10;
        num4 = num4 + num3 * num3 * num3;
        num2 = num2 / 10;
    }

    if (num4 == num1)
    {
        cout << "Entered number is armstrong " << num1;
    }
    else
    {
        cout << "Entered number is not armstrong " << num1;
    }
}
