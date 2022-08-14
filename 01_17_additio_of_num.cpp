// addition of a num of 3 numbers
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, total, a = 0, b = 0;
    cout << "Enter a number" << endl;
    cin >> num;
    total = num;
    a = total % 10;
    b = a + b;
    total = total / 10;
    cout << total << endl;
    a = total % 10;
    b = a + b;
    total = total / 10;

    a = total % 10;
    b = a + b;

    cout << "The addition of number is " << b;

    return 0;
}
