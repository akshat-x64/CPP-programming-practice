#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1, num2 = 0, num3 = -1, num4 = 1;
    cout << "Enter a number";
    cin >> num1;
    num2 = num1;
    int num = 0;
    for (int i = 1; i <= num2; i++)
    {
        num = num3 + num4;
        cout << " " << num;
        num3 = num4;
        num4 = num;
    }

    return 0;
}
