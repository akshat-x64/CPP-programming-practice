// printing pattern
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int  i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i>=j)
            {
                    cout<<"*";
            }
            
        }
        cout<<endl;
    }
        
    return 0;
}
