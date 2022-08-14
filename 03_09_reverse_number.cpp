// reverse a number using loop
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, temp, num1 =0, num2 = 0;
    cout << "Enter number to reverse its value" << endl;
    cin >> num;
    
    while (num > 0)
    {
        num1 = num % 10;
        num = num / 10;
        num2 = num2 * 10 + num1;
        
    }
    cout << "The reversed number is " << num2 << endl;

    return 0;
}
