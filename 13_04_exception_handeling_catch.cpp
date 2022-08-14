#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    try
    {
        throw string("Akshat");
    }
    catch (int a)
    {
        cout << "Int recieved" << endl;
    }
    catch (double a)
    {
        cout << "double recieved" << endl;
    }
    catch (char a)
    {
        cout << "char recieved" << endl;
    }
    catch (string a)
    {
        cout << "String recieved" << endl;
    }
    catch (...)
    {
        cout << "Recieved nothing" << endl;
    }
    return 0;
}
