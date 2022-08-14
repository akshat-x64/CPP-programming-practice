// finding minimum element in array
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[10] = {2, 4, 5, 6, 7, 2, 1, 15, 1, 4}, num = INT_MAX;
    for (int i = 0; i < 10; i++)
    {
        if (num > a[i])
        {
            num = a[i];
        }
    }
    cout << "The smallest element in an array is " << num << endl;
    return 0;
}
