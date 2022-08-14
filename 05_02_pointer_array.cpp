// pointer to array
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[4] = {12,32,43,12};
    int *a;
    a = arr;
    cout<<*a<<endl;
    cout<<*a+1<<endl;
    cout<<*a+2<<endl;
    cout<<*a+3<<endl;    
    return 0;
}
