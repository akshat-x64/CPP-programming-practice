// demonstration of prime function
#include <iostream>
using namespace std;
void prime(int a)
{
    int b = 0;
    for (int i = 2; i < a - 1; i++)
    {
        if (a % i == 0)
        {
            
            b = 1;
            break;
        }
        
    }
    if (b == 1)
    {
        cout<<"This is not a prime number "<<a<<endl;
    }
    else{
        cout<<"This is a prime number "<<a<<endl;
    }
}
int main(int argc, char const *argv[])
{
    int num1;
    cout << "Enter the value of num to find out if its odd or even" << endl;
    cin >> num1;
    prime(num1);
    return 0;
}
