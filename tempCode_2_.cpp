#include <iostream>
using namespace std;
int area(int a)
{
    return 2 * 3.14 * a * a;
}
int area(int a, int  b)
{
    return a * b;
}
float area(float a,float b)
{
    return 0.5*a*b;
}
int main(int argc, char const *argv[])
{
    int radius = 2, lenght = 2, breadth = 2;
    float base = 3, height = 3;
    cout<<"area of circle "<<area(radius)<<endl;
    cout<<"area of circle "<<area(lenght,breadth)<<endl;
    cout<<"area of circle "<<area(base,height)<<endl;
    return 0;
}
