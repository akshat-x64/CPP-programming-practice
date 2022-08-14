#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    string name;
    static int addno;
    student(string a){
        addno++;
        roll = addno;
        name = a;
    }
    void display(){
        cout<<"name "<<name<<endl<<"roll no."<<roll<<endl;

    }
};
int student::addno=0;
int main(int argc, char const *argv[])
{
    student s1("Akshat");
    s1.display();
    return 0;
}
