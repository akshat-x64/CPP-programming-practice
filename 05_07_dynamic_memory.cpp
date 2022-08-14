// dynamic memory declration
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the value of num " << i + 1 << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        cout << "The value of " << i << " " <<arr[i] << endl;
    }
    // cout<<arr[0]<<endl;
    return 0;
}
