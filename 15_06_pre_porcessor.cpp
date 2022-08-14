#include <iostream>
using namespace std;
// #define pi 3.1425
#define max(x, y)(x>y?x:y)

int main(int argc, char const *argv[])
{
    double num = 200, num2=100;
    //num2 = pi * num;
    cout << num2 << endl;
    cout<<max(num2,num);
    return 0;
}
