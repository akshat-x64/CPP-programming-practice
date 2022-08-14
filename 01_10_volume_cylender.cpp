// calculate volume of cylender
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int height,radius;
    float volume;
    cout<<"Enter the height of cylender"<<endl;
    cin>>height;
    cout<<"Enter the radius of cylender"<<endl;
    cin>>radius;
    volume = (22/7.0) * height*radius*radius;
    cout<<"The volume of cylender is "<<volume;    
    return 0;
}
