#include <iostream>
using namespace std;
class stack
{
public:
    int *stk;
    int top;
    int size;
    stack(int a)
    {
        size = a;
        top = -1;
        stk = new int[size];
    }
    void push(int x);
    int pop();
    void display();
};
void stack::push(int x)
{
    if (size == top - 1)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        top++;
        stk[top] = x;
    }
}
int stack::pop()
{
    int x = 0;
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        top--;
        stk[top] == 0;
    }
    return x;
}
void stack::display()
{
    for (int i = 0; i < size; i++)
    {
        cout << stk[i] << endl;
    }
}
int main(int argc, char const *argv[])
{
    stack s(10);
    s.pop();
    s.push(10);
    s.push(20);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.display();
    return 0;
}
