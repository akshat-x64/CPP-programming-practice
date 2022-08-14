#include <iostream>
class derieved;
using namespace std;
class base
{
public:
    int num;
    void display()
    {
        cout << num << endl;
    }
    friend class derieved;
};
class derieved
{
public:
    base b1;
    void display_2()
    {
        b1.num = 1;
    }
    void display_3()
    {
        cout << b1.num << endl;
    }
};
int main(int argc, char const *argv[])
{
    derieved b2;
    base b1;
    b1.num = 1;
    cout << b1.num << endl;
    b2.b1.num = 1;
    // cout<<b1.b1.num<<endl;

    return 0;
}
