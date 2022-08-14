// demonstration of virtual function
#include<iostream>
using namespace std;
class base{
    public:
    virtual void display(){
        cout<<"This is a public class"<<endl;
    }
};
class derieved:public base{
    public:
    void display(){
        cout<<"this is a derieved class"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    base *p;
    derieved a1;
    p = &a1;
    p->display();  
    return 0;
}
