#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
};
void traverse_front(node *ptr)
{
    while (ptr != NULL)
    {
        cout << "element : " << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << endl;
}
void traverse_back(node *ptr)
{
    while (ptr != NULL)
    {
        cout << "element : " << ptr->data << endl;
        ptr = ptr->prev;
    }
}
int main()
{
    node *n1 = new node();
    node *n2 = new node();
    node *n3 = new node();
    node *n4 = new node();

    n1->data = 6;
    n1->next = n2;
    n1->prev = NULL;

    n2->data = 66;
    n2->next = n3;
    n2->prev = n1;

    n3->data = 666;
    n3->next = n4;
    n3->prev = n2;

    n4->data = 6666;
    n4->next = NULL;
    n4->prev = n3;
    cout << "traversal in left to right direc: " << endl;
    traverse_front(n1);

    cout << "traversal in right to left direc: " << endl;
    traverse_back(n4);
}