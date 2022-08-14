// operator overloading
#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int img;

public:
    complex(int a = 0, int b = 0)
    {
        real = a;
        img = b;
    }
    friend complex operator + (complex c1, complex c2);
};

complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c2.img + c1.img;
    return temp;
}
int main(int argc, char const *argv[])
{
    complex r1(5, 8), r2(8, 5);
    complex r3;
    r3 = r1 + r2;
    cout << r3.real << "+i" << r3.img << endl;
    return 0;
}
