// sample to show increment and decrement
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1=2,num2=5,total,total_2;
    total = ++num1 * num2;
    total_2 = num1++ * num2;
    cout<<total<<" "<<total_2<<endl;
    return 0;
}
