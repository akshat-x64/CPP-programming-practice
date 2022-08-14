#include<iostream>
using namespace std;
class base{
     public:
     int *p;
     base(){
         p = new int[20];
         cout<<"Constructor of base"<<endl;
     }
     ~base(){
         delete []p;
         cout<<"Deconstructor of demo"<<endl;

     }
};
int main(int argc, char const *argv[])
{
    
    return 0;
}
