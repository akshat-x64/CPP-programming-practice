#include<iostream>
using namespace std;
class base{
    public:
    int a;
    int b;
    int c;

    base(int x=1,int y=1,int z=1)
    {
        a=x;
        b=y;
        c =z;
    }
    int function_1(){
        return a*b;
    }
    int function_2(){
        return a*b*c;
    }
};
int main(int argc, char const *argv[])
{
    base r1(21,22);
    cout<<r1.function_1()<<endl;
    base r2(22,22,22);
    cout<<r2.function_2()<<endl;
    return 0;
}
 