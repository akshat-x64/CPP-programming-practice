// It is known that “std” (abbreviation for the standard) is a namespace whose members are used in the program.
// So the members of the “std” namespace are cout, cin, endl, etc.
// This namespace is present in the iostream.h header file.
// Below is the code snippet in C++ showing content written inside iostream.h:
 













#include<iostream>
using namespace std;
namespace first{
    void fun(int a,int b){
        if (a>b)
        {
            cout<<"A is greater"<<endl;
        }
        else{
            cout<<"b is greater"<<endl;
        }
    }
}
namespace second{
    void fun(int a,int b){
        if (a<b)
        {
            cout<<"a is smallest"<<endl;
        }
        else{
            cout<<"b is smallest"<<endl;
        }
    }
}
using namespace second;
int main(int argc, char const *argv[])
{
    int a=10,b=20;
    fun(a,b);
    first::fun(a,b);
    return 0;
}
