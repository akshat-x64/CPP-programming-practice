// demonstration of all bitwise operator
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1=5,num2=2;
    int total_1,total_2,total_3,total_4,total_5;
    total_1 = num1&num2;
    total_2 = num1|num2;
    total_3 = ~num1;
    total_4 = num1^num2;
    total_5 = num1&num2;
    cout<<total_1<<endl;
    cout<<total_2<<endl;
    cout<<total_3<<endl;
    cout<<total_4<<endl;
    cout<<total_5<<endl;
    cout<<total_1<<endl;


    return 0;
}
