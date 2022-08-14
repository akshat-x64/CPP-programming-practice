// finding greatest element in array
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[10]={2,4,5,6,7,2,1,9,1,4};
    int b=0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i]>b)
        {
            b = a[i];
        }
        
    }
    cout<<"The greatest number is "<<b<<endl;
    return 0;
}
