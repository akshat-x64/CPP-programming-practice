// demonstration of constructor inheritance
#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "This is base class without parameters" << endl;
    }
    base(int a)
    {
        cout << "This is a base class with parameters " << a << endl;
    }
};
class derieved : public base
{
public:
    derieved()
    {
        cout << "This is a derieved class without parameters" << endl;
    }
    derieved(int b)
    {
        cout << "This is a derieved class with parameters " << b << endl;
    }
};
int main(int argc, char const *argv[])
{
    derieved a(5);
    return 0;
}
