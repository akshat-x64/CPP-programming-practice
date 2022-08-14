#include <iostream>
using namespace std;
class base{
    public:
    int n=20;
    int m=30;
    void display() const{
        //n++;
        cout<<"The value of "<<n<<endl;
    }
};
int main(int argc, char const *argv[])
{
    base a;
    a.n=20;
    a.m=30;
    a.display();
    

    return 0;
}