// finding out positive and negative element in an array
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[10]={2,4,5,6,-7,-2,1,-9,1,4},positive=0,negate=0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i]>=0)
        {
            positive++;
        }
        else
        {
            negate++;
        }
    }
    cout<<"No. of positive number is "<<positive<<endl;
    cout<<"No. of negative number is "<<negate<<endl;
    
    return 0;
}
