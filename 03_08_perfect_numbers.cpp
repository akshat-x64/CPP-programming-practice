// check if a number is perfect number or not
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, total = 0;
    cout << "Enter the value to find out if its perfect no. or not" << endl;
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            total += i;
        }
    }
    if (total == num)
    {
        cout << num << " is a perfect number" << endl;
    }
    else
    {
        cout << num << " is not a perfect number" << endl;
    }

    return 0;
}
