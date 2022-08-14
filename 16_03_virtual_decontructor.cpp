#include <iostream>
using namespace std;
class base
{
public:
     base()
    {
        cout << "This is a base class constructor" << endl;
    }
   virtual  ~base()
    {
        cout<<"This is a base class deconstructor"<<endl;
    }
};
class derieved : public base
{
    public:
    derieved()
    {
        cout << "This is a derieved class constructor" << endl;
    }
    ~derieved()
    {
        cout<<"This is a derieved class deconstructor"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    base *p = new derieved();
    delete p;
    return 0;
}
