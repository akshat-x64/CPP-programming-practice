// achiving runtime polymorphism
// pure virtual functions
#include <iostream>
using namespace std;
class car
{
public:
    virtual void start()=0;
   
    virtual void stop()=0;
   
};
class innova : public car
{
public:
    void start()
    {
        cout << "innova start" << endl;
    }
    void stop()
    {
        cout << "innova strop" << endl;
    }
};
class swift : public car
{
public:
    void start()
    {
        cout << "swift start" << endl;
    }
    void stop()
    {
        cout << "swift strop" << endl;
    }
};
int main(int argc, char const *argv[])
{
    car *a,*g;
    swift b;
    innova c;
    a = &b;
    g = &c;
    a->start();
    a->stop();
    g->start();
    g->stop();
    return 0;
}
