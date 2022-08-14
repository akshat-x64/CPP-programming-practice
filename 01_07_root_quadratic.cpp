// find root of quadratic equation

#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float r1, r2;
    int a, b, c;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    cout << "Enter the value of c" << endl;
    cin >> c;
    r1 = (-b +sqrt((b * b) - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);
    cout <<"The value of r1 is "<<r1<<" " <<r2;

    return 0;
}
