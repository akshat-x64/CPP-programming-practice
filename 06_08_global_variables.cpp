// demonstration of global variable
#include<iostream>
using namespace std;
long long int a = 320329344;
void global_int(){
    cout<<a<<endl;
}
int main(int argc, char const *argv[])
{
    cout<<a<<endl;
    global_int();
    return 0;
}
