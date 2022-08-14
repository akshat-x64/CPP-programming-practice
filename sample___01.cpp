#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, num_1, num_2 = 0, num_3 = 0;
    cout << "Enter the value of num" << endl;
    cin >> num;
    num_1 = num;
    while (num_1 > 0)
    {
        num_2 = num_1 % 10;

        num_3 = num_2 + num_3*10;
        num_1 = num_1 / 10;
        num_2 = 0;
    }
    cout << "The value of num_3 is " << num_3 << endl;
    if (num == num_3)
    {
        cout<<"The number is palindrome "<<num<<endl;

    }
    else{
        cout<<"The number is not palindrome "<<num<<endl;
    };
    return 0;
}
