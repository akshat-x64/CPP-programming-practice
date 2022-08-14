// heap memory allocation
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int *ptr;
    ptr =new int[10];
    delete []ptr;
    ptr =new int[20];
    
    int i  = sizeof new int[20];
    cout<<i<<endl;
    return 0;
}
