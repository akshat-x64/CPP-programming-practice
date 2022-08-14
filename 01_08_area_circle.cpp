// find out area of circle
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float area,radius;
    cout<<"Enter the radius of circle"<<endl;
    cin>>radius;
    area = (float)(22/7.0)*radius*radius;
    cout<<"The area of circle is "<<area<<endl;    
    return 0;
}
