// demonstration of multiplication of 3 numbers
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num,total,a=0,b=1;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    total = num;
    a = total %10;
    b= a*b;
    total = total/10;
    cout<<b<<endl;
     a = total %10;
    b= a*b;
    total = total/10;
     
     a = total %10;
    b= a*b;
    cout<<"The sum of all of its digits of a number is "<<b<<endl;
     
    return 0;
}
