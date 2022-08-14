// achiving runtime polymorphism
// virtual functions
#include <iostream>
using namespace std;
class car
{
public:
    virtual void start()
    {
        cout << "Car start" << endl;
    }
    virtual void stop()
    {
        cout << "Car strop" << endl;
    }
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
