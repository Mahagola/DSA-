#include <iostream>
using namespace std;
// traversal code for an array//
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}
// deletion code for an array//
int deletion(int arr[], int size, int index)
{
    for (int i = index; i < size-1; i++)
    {
       arr[i]=arr[i+1];
    }

    return 1;
}
int main()
{
    int arr[100] = {1, 4, 74, 322, 550};
    int size = 5, element = 2, index = 0;
    display(arr, size);
    deletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}