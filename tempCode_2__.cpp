#include <iostream>
using namespace std;
class base
{
public:
    int width;
    int height;
    int depth;
    base()
    {
        width = 1;
        height = 1;
        depth = 1;
    }
    base(int a, int b, int c)
    {
        width = a;
        height = b;
        depth = c;
    }
    friend int volume(base);
};
int volume(base x)
{
    return x.depth * x.height * x.width;
}
int main(int argc, char const *argv[])
{
    base b1(10, 20, 30);
    cout << volume(b1) << endl;
    return 0;
}
