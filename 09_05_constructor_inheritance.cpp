#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "This is a base class without parameter" << endl;
    }
    base(int a)
    {
        cout << "This is a base class with parameter " << a << endl;
    }
};
class derieved : public base
{
public:
    derieved()
    {
        cout << "This is a derieved class without parameters" << endl;
    }
    derieved(int a)
    {
        cout << "This is a derieved class with parameters" << endl;
    }
    derieved(int a, int y) : base(a)
    {
        cout << "This is a derieved class with calling base derieved class " << y << endl;
    }
};
int main(int argc, char const *argv[])
{
    derieved a(5, 10);
    return 0;
}
