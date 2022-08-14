// declaring 2 d array and using it
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[3][2] = {{0, 1}, {2, 3}, {4, 5}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Element at a " << i << " " << j << " " << a[i][j]<<endl;

        }
       cout<<endl;
    }

    return 0;
}
