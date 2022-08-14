// demonstration of static variable
#include<iostream>
using namespace std;
int num(){
    static int a=0;
    a++;
    return a;
}
int main(int argc, char const *argv[])
{
    cout<<num()<<endl;
    cout<<num()<<endl;
    cout<<num()<<endl;
    cout<<num()<<endl;
    cout<<num()<<endl;
    return 0;
}
