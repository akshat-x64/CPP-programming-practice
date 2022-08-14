// else if ladder
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter a number between 1 to 7" << endl;
    cin >> num;
    if (num >= 1 && num <= 7)
    {
        switch (num)
        {
        case 1:
            cout << "Today is monday" << endl;
            break;
        case 2:
            cout << "Today is Tuesday" << endl;
            break;
        case 3:
            cout << "Today is Wednesday" << endl;
            break;
        case 4:
            cout << "Today is Thrusday" << endl;
            break;
        case 5:
            cout << "Today is Friday" << endl;
            break;
        case 6:
            cout << "Today is Saturday" << endl;
            break;
        case 7:
            cout << "Today is Sunday" << endl;
            break;
        }
    }
    else{
        cout<<"ENter a valid number"<<endl;
    }    
    return 0;
}
