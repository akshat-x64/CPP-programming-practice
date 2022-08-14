// sample loop for for loop print upto n number
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i = 1, num;
    cout << "Enter the value to print upto that number" << endl;
    cin >> num;
    for (; i <= num; i++)
    {
        cout << "The value of i is " << i << endl;
        
    }

    return 0;
}
