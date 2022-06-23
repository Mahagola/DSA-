#include <iostream>
using namespace std;
class stack
{
public:
    int size;
    int top;
    int *arr;
};
int check_full(stack *p)
{
    if (p->top == p->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    cout << endl;
}
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
    cout << endl;
}
void push(stack *ptr, int value)
{
    if (check_full(ptr))
    {
        cout << "stack overflow!" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(stack *ptr)
{
    if (check_empty(ptr))
    {
        cout << "stack underflow!" << endl;
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
int peek(stack *ptr, int i)
{
    int n = ptr->top - i + 1;
    if (n < 0)
    {
        cout << "invalid position! " << endl;
        return -1;
    }
    else
    {
        return ptr->arr[n];
    }
}

int main()
{
    stack *ptr = new stack;
    ptr->size = 10;
    ptr->top = -1;
    ptr->arr = new int(ptr->size);
    cout << "before push, full : " << check_full(ptr) << endl;
    cout << "before push, empty : " << check_empty(ptr) << endl;
    push(ptr, 38);
    push(ptr, 28);
    push(ptr, 18);
    push(ptr, 8);
    push(ptr, 748);
    push(ptr, 785);
    push(ptr, 76);
    push(ptr, 89);
    push(ptr, 98);
    push(ptr, 54); //--->pushed 10 values
    push(ptr, 34); //--->stack overflow,can't push more!
    cout << "after push, full : " << check_full(ptr) << endl;
    cout << "after push, empty : " << check_empty(ptr) << endl;

    cout << "poped " << pop(ptr) << " from the stack " << endl; //-->last in first out!
    cout << "poped " << pop(ptr) << " from the stack " << endl; //-->last in first out!

    for (int j = 1; j <= ptr->top + 1; j++)
    { 
        cout << "value at position " << j << " is " << peek
    (ptr, j) << endl;
    }

    return 0;
}
