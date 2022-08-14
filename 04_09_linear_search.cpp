// linear searching 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[10] = {2, 4, 5, 6, 7, 2, 1, 12, 1, 4}, num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    for (int i = 0; i < 10; i++)
    {
        if (num  == a[i])
        {
            cout<<"Elemet found at "<<i<<endl;
            return 0;
        }
        
    }
    
         cout<<"Element not found"<<endl;   
        
    
    return 0;
}
