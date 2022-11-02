#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
       string sample = "xobin^bootcamzZ";
       string modified;
       int code = 0;
       for (int i = 0; i < sample.length(); i++)
       {
              code = sample[i];
              if (code == 122)
              {
                     sample[i] = 97;
                     continue;
              }
              else if (code == 90)
              {
                     sample[i] = 65;
                     continue;
              }

              else if (code >= 65 && code <= 90 || 97 <= code && code <= 122)
              {
                     sample[i] = sample[i] + 1;
              }
              else
              {
                     sample[i] = sample[i];
              }
       }
       modified = sample;
       cout << modified << endl;
       return 0;
}
