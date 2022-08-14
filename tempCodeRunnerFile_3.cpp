#include<iostream>
using namespace std;
class student{
    public:
    int roll_no;
    string name;
    int s1;
    int s2;
    int s3;
    student(int a,string b,int x,int y,int z){
        roll_no = a;
        name = b;
        s1 = x;
        s2 = y;
        s3 = z;

    }
    int avg(){
        return (s1+s2+s3)/3;
    }
};
int main(int argc, char const *argv[])
{
    student r1(12,"Akshat",78,54,76);
    cout<<r1.avg()<<endl;
    return 0;
}
