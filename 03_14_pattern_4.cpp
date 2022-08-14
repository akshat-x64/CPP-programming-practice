// printing pattern
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   
    char a = 65;
    for (int i = 1; i <=5; i++)
    {
        for (int j = 5; j >=1; j--)
        {
            if (j>=i)
            {
                cout<<a;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
        
    return 0;
}
