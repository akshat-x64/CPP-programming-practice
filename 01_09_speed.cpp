// calculate speed
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int u,v,a;
    float speed;
    cout<<"Enter the initial speed"<<endl;
    cin>>u;
     cout<<"Enter the speed"<<endl;
    cin>>v;
    cout<<"Enter "<<endl;
    cin>>a;   
    speed =((v*v)-(u*u))/(2*a);
    cout<<"The speed is "<<speed;
    return 0;
}
