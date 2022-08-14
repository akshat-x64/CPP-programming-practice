#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> a_1;
    a_1 = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    cout << "Before inserting" << endl;
    // for (int x : a_1)
    // {
    //     cout << x << endl;
    // }
    cout << "after inserting" << endl;
    a_1.push_back(20);
    a_1.push_back(30);
    // a_1.erase();
    // for (int x : a_1)
    // {
    //     cout << x << endl;
    // }
    vector<int>::iterator itr;
    // for (itr = a_1.begin(); itr != a_1.end(); itr++)
    // {
    //     cout << *itr << endl;
    // }
    a_1.erase(itr);
    for (itr = a_1.begin(); itr != a_1.end(); itr++)
    {
        cout << *itr << endl;
    }
    return 0;
}
