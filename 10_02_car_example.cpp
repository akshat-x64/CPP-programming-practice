// base class pointer and derieved class object
#include <iostream>
using namespace std;
class japan
{
public:
    void display_1()
    {
        cout << "This is  tokyo" << endl;
    }
    void display_2()
    {
        cout << "This is kyoto" << endl;
    }
};
class shinzoku : public japan
{
public:
    void display_3()
    {
        cout << "This is shinzoku" << endl;
    }
};
int main(int argc, char const *argv[])
{
    japan *akshat;
    shinzoku a;
    akshat = &a;
    akshat->display_1();
    akshat->display_2();
    return 0;
}
