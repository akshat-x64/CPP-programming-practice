#include <iostream>
using namespace std;
template <class t>
class stack
{
public:
    t *stk;
    int top;
    int size;
    stack(t a)
    {
        size = a;
        top = -1;
        stk = new t[size];
    }
    void push(t x);
    int pop();
    void display();
};
template <class t>
void stack<t>::push(t x)
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
template <class t>
int stack<t>::pop()
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
template <class t>
void stack<t>::display()
{
    for (int i = 0; i < size; i++)
    {
        cout << stk[i] << endl;
    }
}
int main(int argc, char const *argv[])
{
    stack<int> s(10);
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
