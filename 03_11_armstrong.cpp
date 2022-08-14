// check if a number is armstrong or not
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, num2 = 0, total = 0, total_2 = 0;
    cout << "Enter a number to check if its armstrong number or not" << endl;
    cin >> num;
    num2 = num;
    while (num > 0)
    {
        total = num % 10;
        num = num / 10;
        total_2 = total_2 + total * total * total;
        
        
    }
    if (num2 == total_2)
    {
        cout << num2 << " is a armstrong number" << endl;
    }
    else
    {
        cout << num2 << " is not a armstrong number" << endl;
    }
    return 0;
}
