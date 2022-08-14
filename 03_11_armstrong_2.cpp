#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num,num2=0,num3=0,num4=0;
    cout<<"Enter the value of num tocheck if its armstrong number or not"<<endl;
    cin>>num;
    num2 = num;
    while (num2>0)
    {
        num3 = num2%10;
        
        num4 = num4 + num3*num3*num3;
        num2 = num2/10;
    }
    if (num4  == num)
    {
        cout<<num<<" is a armstrong number"<<endl;
    }
    else{
        cout<<num<<" is not a armstrong number"<<endl;
    }
    


    return 0;
}
