#include<iostream>
using namespace std;
void display(const int &a,int &b){
    //a++;
    cout<<a<<endl;
    cout<<b<<endl;
}
int main(int argc, char const *argv[])
{
    int num=10,num_2=20;
    display(num,num_2);
    return 0;
}
