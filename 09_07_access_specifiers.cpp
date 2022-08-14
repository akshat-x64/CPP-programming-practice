// demonstration of access specfiers
#include <iostream>
using namespace std;
class parent
{
private:
    int length;

protected:
    int breadth;

public:
    int height;

public:
    void fun()
    {
        length = 10;
        breadth = 20;
        height = 30;
    }
};
class child : protected parent
{
public:
    void funclass()
    {
        // length = 10;
        breadth = 20;
        height = 30;
    }
};
int main(int argc, char const *argv[])
{
    child b;
    // b.length = 10;
    // b.breadth = 20;
    //b.height = 30;
    return 0;
}
