#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void traverse(node *head)
{
    node *p = head;
    do
    {
        cout << "element: " << p->data << endl;
        p = p->next;
    } while (p != head);
    cout << endl;
}
node *insert_first(node *head, int data)
{
    node *ptr = new node();
    ptr->data = data;
    node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;

    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    node *head = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();

    head->data = 9;
    head->next = second;

    second->data = 32;
    second->next = third;

    third->data = 29;
    third->next = fourth;

    fourth->data = 67;
    fourth->next = head;

    traverse(head);
    head = insert_first(head, 11);
    traverse(head);
}