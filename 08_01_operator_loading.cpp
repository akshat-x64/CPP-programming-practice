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
    complex operator+(complex m)
    {
        complex temp;
        temp.real = real + m.real;
        temp.img = img + m.img;
        return temp;
    }
};
int main(int argc, char const *argv[])
{
    complex r1(5, 8), r2(8, 5);
    complex r3;
    r3 = r1 + r2;
    cout << r3.real << "+i" << r3.img << endl;
    return 0;
}
