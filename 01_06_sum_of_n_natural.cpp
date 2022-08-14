// find the sum of n natural numbers
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
     int sum,num;
     cout<<"Enter a number to find out its natural numbers"<<endl;
     cin>>num;
     sum = (num*(num+1))/2;
     cout<<"The value is "<<sum;
     

    return 0;
}
