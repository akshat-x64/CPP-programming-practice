#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    for (int i = 10; i >= 1; i--)
    {
        for (int j = 10; j >= 1; j--)
        {
            if (i >= j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
