// demonstration of function handeling using function
// error code 1 = don't give any
#include <iostream>
using namespace std;
int division(int x, int y)
{
    if (y == 0)
    {
        throw 1;
    }
    else
        return x / y;
}
int main(int argc, char const *argv[])
{
    int a;
    int b;
    int z;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    try
    {
        z = division(a, b);
        cout << "The division is " << z;
    }
    catch (int p)
    {
        cout << "Error code " << p;
    }

    return 0;
}
