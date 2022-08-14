// demonstration of base class pointer and derieved class object
#include<iostream>
using namespace std;
class rectangle{
    public:
    void display_rectangle(){
        cout<<"This is a rectange 1"<<endl;
    }
    void display_rectangle_2(){
        cout<<"This is a rectangel 2"<<endl;
    }
};
class cuboid:public rectangle{
    public:
    void display_cuboid(){
        cout<<"This is a cuboid 3"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    rectangle *ptr,b;
    cuboid a,*ptr_2;
    ptr  = &a;
    //ptr_2 = &b;
    ptr->display_rectangle();
    ptr->display_rectangle_2();
    return 0;
}
