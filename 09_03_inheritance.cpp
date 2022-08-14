// demonstration of inheritance
#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle()
    {
        length = 1;
        breadth = 1;
    }
    rectangle(int a, int b)
    {
        length = a;
        breadth = b;
    }
    int get_length()
    {
        return length;
    }
    int get_breadth()
    {
        return breadth;
    }
    void set_length(int a)
    {
        length = a;
    }
    void set_breadth(int b)
    {
        breadth = b;
    }
};
class cuboid : public rectangle
{
private:
    int height;

public:
    cuboid()
    {
        height = 1;
    }
    cuboid(int z)
    {
        height = z;
    }
    int volume()
    {
        return height * get_breadth() * get_length();
    }
    void set_height(int x){
        height  = x;

    }
};
int main(int argc, char const *argv[])
{
    cuboid c;
    c.set_length(10);
    c.set_breadth(20);
    c.set_height(10);
    cout << c.volume() << endl;
    return 0;
}
