// finding the factors of number
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the value to find out its multiplication tabel"<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << "The factorial of " << num << " is " << i << endl;
        }
    }

    return 0;
}
