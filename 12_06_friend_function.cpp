// demonstration of friend function
#include <iostream>
using namespace std;
class base
{
public:
    int a;
    int b;
    base()
    {
        a = 1;
        b = 1;
    }
    base(int x, int y)
    {
        a = x;
        b = y;
    }
    friend int add(base);
};
int add(base y)
{
    return y.a + y.b;
}

int main(int argc, char const *argv[])
{
    base a1(10,20);
    cout<<add(a1)<<endl;
}
