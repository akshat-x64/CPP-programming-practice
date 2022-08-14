#include <iostream>
using namespace std;

class base
{
public:
    int a;

    int b;

    int c;
    base(int x = 1, int y = 1, int z = 1)
    {
        a = x;
        b = y;
        c = z;
    }
    int rectangle()
{
   return a*b*c;
}
};

int main(int argc, char const *argv[])
{
    base r1(12, 15, 14);
    cout << r1.rectangle()<<endl;
    return 0; 
}
