// this program is used for calculation of bill amount
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int amount;
    cout << "Enter the amount" << endl;
    cin >> amount;
    if (amount <= 100)
    {
        cout << "There is no discount" << endl;
    }
    else
    {
        if (amount <= 500)
        {
            int dis = (amount * 10) / 100;
            cout << "There is discount for rs " << dis << " on amount" << amount << endl;
        }
        else
        {
            if (amount >= 500)
            {
                int dis = (amount * 20) / 100;
                cout << "There is discount for rs " << dis << " on amount" << amount << endl;
            }
        }
    }
        return 0;
    }
