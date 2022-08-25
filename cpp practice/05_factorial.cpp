#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1, num2 = 1, num3 = 0, num4 = 0;
    cout << "Enter a number";
    cin >> num1;
    for (int i = 1; i <= num1; i++)
    {
        num2 *= i;
    }
    cout << "The factorial of number is " << num2;
    return 0;
}
