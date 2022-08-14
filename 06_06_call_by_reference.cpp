// demonstration of call by reference
#include<iostream>
using namespace std;
void val_swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char const *argv[])
{
    int num1,num2;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
    cout<<"Number before swapping"<<" num1="<<num1<<" "<<"num2="<<num2<<endl;
    val_swap(&num1,&num2);    
    cout<<"Number after swapping"<<" num1="<<num1<<" "<<"num2="<<num2<<endl;
    return 0;
}
