// printing pattern
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 5; i >=1 ; i--)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
