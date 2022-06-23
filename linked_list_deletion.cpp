#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void traverse(node *n)
{
    while (n != NULL)
    {
        cout << "element: " << n->data << endl;
        n = n->next;
    }
    cout << endl;
}
node *delete_beginning(node *head)
{
    node *n = head;
    head = head->next;
    free(n);
    return head;
}
node *delete_index(node *head, int index)
{
    node *p = head;
    node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
node *delete_end(node *head)
{
    node *p = head;
    node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
node *delete_value(node *head, int value)
{
    node *p = head;
    node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }

    return head;
}
int main()
{
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;
    node *fourth = NULL;

    head = new node();
    second = new node();
    third = new node();
    fourth = new node();

    head->data = 9;
    head->next = second;

    second->data = 32;
    second->next = third;

    third->data = 29;
    third->next = fourth;

    fourth->data = 67;
    fourth->next = NULL;

    traverse(head);
    // head = delete_beginning(head);
    // head = delete_index(head, 2);
    // head=delete_end(head);
    // head=delete_value(head, 32);

    traverse(head);
}