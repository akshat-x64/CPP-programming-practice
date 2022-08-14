// maximum of 2 number using if else
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   float num1,num2,division;
   cout<<"Enter number for num1"<<endl;
   cin>>num1;
   cout<<"Enter number for num2"<<endl;
   cin>>num2;

   if (num2 == 0)
   {
       cout<<"Please put a non zero value"<<endl;
   }
   else
   {
       division = num1/num2; 
       cout<<"The divisor is "<<division<<endl;
   }
   
}
