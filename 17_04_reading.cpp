#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    string b;
    ifstream infile;
    if (infile.is_open())
    {
        cout<<"File is opened"<<endl;
    }
    
    infile.open("Akshat.txt");
    infile>>b>>a;
    cout<<b<<endl;
    cout<<a<<endl;
    infile.close();

    return 0;
}
