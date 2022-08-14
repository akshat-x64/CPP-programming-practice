// adding all the elements in an array
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[10]={2,4,5,6,7,2,1,9,1,4},sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum+=a[i];
    }
        cout<<"The sum of all elements in array "<<sum<<endl;
    return 0;
}
