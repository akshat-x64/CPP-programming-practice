//printing pattern
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{ 
    int num;
    cout<<"Enter a number to print upto that * numbers"<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
        
    return 0;
}
