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
        num4 = num4 + num3;
        num2 = num2 / 10;
        num3 = 0;
    }
    cout << "The number is " << num4;
    return 0;
}
