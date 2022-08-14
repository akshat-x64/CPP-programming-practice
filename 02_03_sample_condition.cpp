// checking zero
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1, num2, total;
    cout << "Enter a numer num1" << endl;
    cin >> num1;
    cout << "Enter a numer num2" << endl;
    cin >> num2;

    if (num2 == 0)
    {
        cout << "Enter a non zero number" << endl;
    }

    else
    {
        total = num1 / num2;
        cout << "The value is " << total;
    }
    return 0;
}
