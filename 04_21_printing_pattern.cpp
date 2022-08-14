//printing pattern
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j <5; j++){
        if(i+j <4) 
        {
            cout<<" ";
        }
        else{
            cout<<"*";
        }
        
        }
        cout<<endl;
    }    
    return 0;
}
