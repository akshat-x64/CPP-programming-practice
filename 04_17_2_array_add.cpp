// addition of 2 array
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num[2][2] = {{10,20},{30,40}},sum[2][2],num1[2][2] = {{12,50},{40,40}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = num[i][j] + num1[i][j] ;
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << sum[i][j]<<" " ;
        }
        cout<<endl;
    }
    return 0;
}
