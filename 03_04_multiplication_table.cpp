// multiplication table for number given by the user
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num ,i=1;
    cout<<"Enter the value to find out its multiplication tabel"<<endl;
    cin>>num;
    for (; i <= 10; i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
        
    return 0;
}
