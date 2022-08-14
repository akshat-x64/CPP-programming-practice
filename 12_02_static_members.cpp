#include <iostream>
using namespace std;
class base
{
public:
    int a;

    static int count;
    base()
    {
        a = 10;

        count++;
    }

    static int getcount()
    {
        return count;
    }
};
int base::count = 0;
int main(int argc, char const *argv[])
{
    base t1;
    base t2;
    cout << t1.getcount() << endl;
    cout << base::getcount() << endl;
    return 0;
}
