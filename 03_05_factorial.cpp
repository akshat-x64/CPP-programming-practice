// find out factorial of a number
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num,total=1;
    cout<<"Enter the value to find out its multiplication tabel"<<endl;
    cin>>num;    
    for (int i = 1; i <= num; i++)
    {
        total *= i;
    }
    cout<<"The factorial of "<<num<<" is "<<total;
    return 0;
}
