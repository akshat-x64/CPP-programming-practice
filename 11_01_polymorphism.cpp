// function over riding
#include<iostream>
using namespace  std;
class base{
    public:
    void display(){
        cout<<"This is a base class"<<endl;
    }
};
class derieved:public  base{
    public:
    void display(){
        cout<<"This is a derieved class"<<endl;
    }

};
int main(int argc, char const *argv[])
{
    derieved r1;
    r1.display();
    return 0;
}
