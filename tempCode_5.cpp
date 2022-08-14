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
int add(base x)
{
    return x.a + x.b;
};
int main(int argc, char const *argv[])
{
    base a1(10, 20);
    base a2(1, 1);
    cout << add(a1) << endl;
    cout << add(a2) << endl;
    ;
    return 0;
}
