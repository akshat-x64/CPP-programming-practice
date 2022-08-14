// demonstration of enum
#include<iostream>
using namespace std;
enum days {sun=1,mon,tue,wed,thr,fri,sat};
int main(int argc, char const *argv[])
{
    days num;
    num = tue;
    cout<<num<<endl;
    return 0;
}
