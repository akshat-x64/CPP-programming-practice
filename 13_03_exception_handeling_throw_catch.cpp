// demonstraction of throw and catch
#include <iostream>
using namespace std;
class base : public exception
{
};
int division(int a, int b) throw(int)
{ // if throw() is like this means function is not throwing anything
    if (b == 0)
    {
        throw 1;
    }
    else
    {
        return a / b;
    }
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
