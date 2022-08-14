// adding the sum of elements in array
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[10]={2,4,5,6,7,2,1,7,1,4};
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum+=a[i];
    }
        cout<<"The sum of elements is an array is "<<sum<<endl;
    return 0;
}
