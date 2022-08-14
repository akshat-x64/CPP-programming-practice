// finding out if a number is prime number or not
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, total = 0;
    cout << "Enter the value to find out its multiplication tabel" << endl;
    cin >> num;
    for (int i = 2; i < (num - 1); i++)
    {
        if (num % i == 0)
        {
            total = 1;
            break;
        }
    }
    if (total == 1)
    {
        cout << "num"
             << " is not a prime number";
    }
    else
    {
        cout << "num"
             << " is a prime number";
    }
    return 0;
}
