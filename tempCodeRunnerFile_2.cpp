#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int img;
    complex(){
        real = 1;
        img = 1;
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
    }
    friend complex operator+(complex c1, complex c2);
};
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main(int argc, char const *argv[])
{
    complex r1,r2;
    complex r3;
    r3 = r2 + r1;
    cout << r3.real << " " << r3.img;
    return 0;
}
