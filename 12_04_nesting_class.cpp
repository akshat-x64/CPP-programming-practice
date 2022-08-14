#include <iostream>
using namespace std;
class outer
{
public:
    int a;
    static int b;
    void display()
    {
        a_1.display_2();
    }
    class inner
    {
    public:
        int a;
        void display_2()
        {
            cout << "Display inner" << endl;
        }
    };
    inner a_1;
};
int main(int argc, char const *argv[])
{
    outer r1;
    r1.display();
    
    return 0;
}
