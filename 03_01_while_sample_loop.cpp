// sample loop for while loop print upto n number
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i = 1, num;
    cout << "Enter the value to print upto that number" << endl;
    cin >> num;
    while (i <= num)
    {
        cout << "The value is " << i << endl;
        i++;
    }

    return 0;
}
