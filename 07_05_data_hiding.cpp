// data hiding //incapsulation
#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
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
    rectangle r1, r2;
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
    return 0;
}
