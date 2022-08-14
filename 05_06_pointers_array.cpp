// using pointer to array
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[10] = {12,243,5,45,21,32,21,32,43,55};
    int *p;
     p = arr;
     for (int i = 0; i < 10; i++)
     {
        //  cout<<"The value of arr "<<i<<" "<<*(p+i)<<endl;
        //  cout<<"The value of arr "<<i<<" "<<*p<<endl;
        //  p++;
        cout<<"The value of arr "<<i<<" "<<*(p+i)<<endl;
     }
     
    return 0;
}
