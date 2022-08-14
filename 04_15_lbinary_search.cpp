// binary search
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[10] = {1, 4, 5, 7, 8, 11, 14, 17, 18, 20};
    int low = 0, high = 10, mid = 0, key = 12;
    while (low <= high)
    {

        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            cout << "key founded at " << a[mid] << endl;
            return 0;
        }
        else if (a[mid] < key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "key not found" << endl;
    return 0;
}
