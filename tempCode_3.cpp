#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, num_2=0;
    
    for ( num = 100; num <= 200; num++)
    {
        num_2=0;
       for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            num_2 = 1;
            
        }
        
    }
    if (num_2 ==0)
    {
        cout << "prime number "<<num << endl;
    }
    
    }
    
    
    return 0;
}
