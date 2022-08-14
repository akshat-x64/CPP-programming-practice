#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num = 1;
    for (int i = 100; i <= 200; i++)
    {
        num=1;
        for (int i_2 = 2; i_2 < i; i_2++)
        {
            if (i % i_2 == 0)
            {
                num = 0;
                
            }
        }
        if (num == 0)
        {
            cout << "This is not a prime number " << i << endl;
        }
        else
        {
            cout << "This is a prime number " << i << endl;
        }
    }

    return 0;
}
