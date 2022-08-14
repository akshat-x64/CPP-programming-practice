#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "This is base class contructor" << endl;
    }
    ~base()
    {
        cout << "This is base class destructor" << endl;
    }
};
void fun(){
    base *ptr  = new base();
}
int main(int argc, char const *argv[])
{
    fun();
    return 0;
}
