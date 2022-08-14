#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    int b;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    int c = 0;
    try
    {
        if (b == 0)
        {
            throw 1;
        }
        c = a / b;
        cout << "The value of b " << b << endl;
    }
    catch (int a)
    {
        cout << "Error code " << a << endl;
    }
    cout << "Bye" << endl;
    return 0;
}
