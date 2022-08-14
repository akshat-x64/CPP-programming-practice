// sample logical operator
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout<<"Enter age in "<<endl;
    cin>>age;
    if (age>=18 && age <=60)
    {
        cout<<"You are elegiable for work"<<endl;
    }
    else
    {
        cout<<"You are not elegiable for work"<<endl;
    }
    return 0;
}
