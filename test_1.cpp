#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string sample = "xobin^bootcamp";
    string sampleModified = "";
    int charCode = 0;
    string aa;

    for (int i = 0; i < sample.length(); i++)
    {
        charCode = sample[i];
        if ((charCode >= 97 && charCode <= 122) || (charCode >= 65 && charCode <= 90))
        {

            sample[i] = charCode + 1;
        }

        // cout << sample[i];
    }
    cout << sample << endl;

    for (int i = 0; i < sample.length(); i++)
    {
        charCode = sample[i];
        if (charCode == 97 || charCode == 101 || charCode == 105 || charCode == 111 || charCode == 117)
        {
            sample[i] = charCode - 32;
        }
    }
    aa = sample;
    cout << aa;
    return 0;
}
