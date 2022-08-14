//in in encaosulation combine data and function and in which data 
//is hidden and function is open(function defination is declared)
#include<iostream>
using namespace std;
class rectangle{
    public:
    int length,breadth;
    public:
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(int argc, char const *argv[])
{
    rectangle r1,r2;
    r1.length = 10;
    r1.breadth = 5;
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;    
    return 0;
}
