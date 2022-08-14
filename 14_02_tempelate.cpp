#include<iostream>
using namespace std;
template <class t>
class stack{
    private:
    int top;
    t *stk;
    int size;
    public:
    stack(t a){
        size = a;
        top = -1;
        stk = new t[size];

    }
    void push(t a);
    void pop();
};
template <class t>
void stack<t>::push(t a){
    if (size == top-1)
    {
        cout<<"Stack is full"<<endl;
    }
    else{
        top++;
        stk[top] = a;
    }
}
template <class t>
void stack<t>::pop(){
    
    t x = 0;
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        top--;
        stk[top] == 0;
    }
    
}
int main(int argc, char const *argv[])
{
    stack<float> s(10);
    s.push(20);
    return 0;
}
