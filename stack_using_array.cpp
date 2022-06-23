#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    int *arr;
};

int check_empty(stack *p)
{
    if (p->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    stack *s = new stack;
    s->size = 20;
    s->top = -1;
    s->arr = new int();

    if (check_empty(s))
    {
        cout << "stack is empty!";
    }
    else
    {
        cout << "stack is not empty! ";
    }

    return 0;
}