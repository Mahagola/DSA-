#include <iostream>
using namespace std;
int searchBinary(int arr[], int size, int element)
{
    int mid, low, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{ // sorted array for binary//
    int arr[] = {2, 4, 5, 6, 11, 24, 33, 64, 2323, 232354};
    int size = sizeof(arr) / sizeof(int);
    int element = 64;
    int dataSearched = searchBinary(arr, size, element);
    cout << "after Binary searching, order of the element " << element << " was found at index " << dataSearched << endl;
    return 0;
}