#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int length, breadth ,perimeter;
    cout<<"Enter the value of length"<<endl;
    cin>>length;
    cout<<"Enter the value of breadth"<<endl;
    cin>>breadth;
    perimeter  = 2*(length+breadth);
    cout<<"the perimeter of rectangle is "<<perimeter<<endl;
    return 0;
}
