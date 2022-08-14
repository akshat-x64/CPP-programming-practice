// demonstration of pointers
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=5,*b;
    b = &a;
    cout<<"The value of "<<a<<endl;
    cout<<"The value of "<<*b<<endl;
    cout<<"The address is "<<(unsigned)&a<<endl;
    cout<<"The address is "<<(unsigned)b<<endl;
    cout<<"The address is "<<(unsigned)&b<<endl;

    return 0;
}
