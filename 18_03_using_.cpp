#include <iostream>
#include <list>
using namespace std;
int main(int argc, char const *argv[])
{
    list<int> l_1;
    l_1 = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    l_1.push_back(10);
    l_1.push_back(20);
    for (int x : l_1)
    {
        cout << x << endl;
    }
    list<int>::iterator itr;
    for (itr = l_1.begin(); itr != l_1.end(); itr++)
    {
        cout << *itr << endl;
    }
    l_1.remove(100);
    for (itr = l_1.begin(); itr != l_1.end(); itr++)
    {
        cout << *itr << endl;
    }
    return 0;
}
