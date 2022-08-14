#include <iostream>
using namespace std;
class parent
{
public:
    int length;
    int breadth;
};
class child : public parent
{
public:
    int height;
};
class grandchild : public child
{
public:
    int area()
    {
        return length * breadth * height;
    }
};
int main(int argc, char const *argv[])
{
    grandchild cuboid;
    cuboid.length = 10;
    cuboid.breadth = 20;
    cuboid.height = 30;
    cout << "The is area is " << cuboid.area() << endl;
    return 0;
}
