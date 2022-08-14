// print fabinacci number
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num ,num1 = -1,num2 =1,num3;
    cout<<"Enter a number to print upto that fabionacci number"<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        num3 = num1+num2;
        num1 = num2;
        num2  = num3;
        cout<<"The fabinacci number is "<<num3<<endl;
    }
    

    return 0;
}
