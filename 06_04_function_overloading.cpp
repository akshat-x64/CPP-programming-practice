//demonstration of function overloading
#include<iostream>
using namespace std;
int add_variable(int a,int b,int c = 0)
{
    return a+b+c;
}
// int add_variable(int a,int b)
// {
//     return a+b;
// }
int main(int argc, char const *argv[])
{
    int num1=12,num2=12,num3 = 3,sum;
    sum = add_variable(num1,num2);
    cout<<sum<<" "<<endl;
    return 0;
}

