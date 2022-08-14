#include <iostream>
using namespace std;
class base
{
public:
    int a;
    void display()
    {
        cout << "This is a base class " << a << endl;
    }
};
class derived : public base
{
public:
    int b;
    void show()
    {
        cout << "This is  a derieved class "<<b << endl;
    }
};

int main(int argc, char const *argv[])
{
    derived a;
    a.a = 15;
    a.b = 20;
    a.display();
    a.show();

    return 0;
}
