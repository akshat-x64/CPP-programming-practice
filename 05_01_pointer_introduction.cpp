//pointer introduction
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=2,c=2;
    int *b,*d;
    b = &a;
    d = &c;
    cout<<a<<endl;
    cout<<*b<<endl;

    cout<<(unsigned)b<<endl;
    cout<<(unsigned)&a<<endl;
    cout<<(*b)+(*d)<<endl;
    return 0;
}
