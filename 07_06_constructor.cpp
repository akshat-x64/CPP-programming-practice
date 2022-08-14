// data hiding //incapsulation
#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int a = 1, int b = 1)
    {
        setlength(a);
        setbreadth(b);
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {

        return 2 * (length + breadth);
    }
    void setlength(int a)
    {
        if (a >= 1)
        {
            length = a;
        }
    }
    void setbreadth(int b)
    {
        if (b >= 1)
        {
            breadth = b;
        }
    }
};
int main(int argc, char const *argv[])
{
    rectangle r1(10,5);
    rectangle r2(r1);
    int a, b;
    cout << "Enter a positive number" << endl;
    cout << "Enter the value of length" << endl;
    cin >> a;
    cout << "Enter the value of breadth" << endl;
    cin >> b;
    r1.setlength(a);
    r1.setbreadth(b);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    
    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;
    return 0;
}
