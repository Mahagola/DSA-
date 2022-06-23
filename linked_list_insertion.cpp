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
node *insert_beginning(node *head, int data)
{
    node *ptr = new node();
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
node *insert_end(node *head, int data)
{
    node *ptr = new node();
    ptr->next = head;
    ptr->data = data;
    node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}
node *insert_index(node *head, int data, int index)
{
    node *ptr = new node();
    node *p = head;
    int i = 0;
    while (i != (index - 1))
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
node *insert_afterNode(node *head, node *prevNode, int data)
{
    node *ptr = new node();
    ptr->data=data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
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
    second->next = fourth;

    third->data = 29;
    third->next = NULL;

    fourth->data = 67;
    fourth->next = third;

    traverse(head);
    // head = insert_beginning(head, 11);
    // head = insert_index(head, 6969, 3);
    // head=insert_end(head, 550);
    // head=insert_afterNode(head, third, 770);

    traverse(head);
}