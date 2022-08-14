#include <iostream>
using namespace std;
class rectangel
{
public:
    int length;
    int breadth;
};
class cuboid : public rectangel
{
public:
    int height;
};
class sample
{
public:
    cuboid a;
};
int main(int argc, char const *argv[])
{   
   
    return 0;
}
