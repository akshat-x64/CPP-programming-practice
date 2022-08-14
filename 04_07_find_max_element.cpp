// finding greatest element in an array
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[10]={2,4,5,6,7,2,1,9,55,4},num =INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        if (num<a[i])
        {
            num = a[i];
        }
        
    }
    cout<<"MAx is "<<num<<endl;
    
       
    return 0;
}
