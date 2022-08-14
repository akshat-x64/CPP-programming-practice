#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream obb_b("Akshat.txt");
    obb_b << "Akshat" << endl;
    obb_b << "10" << endl;
    obb_b << "Dwivedi" << endl;
    obb_b.close();
    return 0;
}
