// how to take name or line as input
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string name;
    cout<<"Enter your name"<<endl;    
    // cin>>name;
    getline(cin,name);
    cout<<"Welcome "<<name<<endl;
    return 0;
}
