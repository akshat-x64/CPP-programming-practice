// demonstration of call by value swap 2 number
#include<iostream>
using namespace std;
void swap_int(int a ,int b);
int main(int argc, char const *argv[])
{
    int num1,num2,num3;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
    swap_int(num1,num2);
    return 0;
}
void swap_int(int a ,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
}