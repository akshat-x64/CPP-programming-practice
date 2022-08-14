// taking input from user and printing it
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int marks[10] = {10,12,21,43,12};
    int *mar = marks;

    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"Enter the value of marks of Roll no. "<<i+1<<endl;
    //     cin>>marks[i];
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"the value of marks of Roll no. "<<i+1<<" "<<*(mar+i)<<endl;
        
    // }
    cout<<*mar++<<endl;
    cout<<*++mar<<endl;
    return 0;
}
