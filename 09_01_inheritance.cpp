// demonstration of inheritance
#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int bredth;

    int show_length()
    {
        return length;
    }
    int show_bredth()
    {
        return bredth;
    }
};
class cuboid : public rectangle
{
public:
    int height;
    int volume()
    {
        return length * bredth * height;
    }
};
int main(int argc, char const *argv[])
{
    cuboid r1;
    r1.length = 20;
    r1.bredth = 10;
    r1.height = 10;
    cout << r1.volume() << endl;
    return 0;
}
