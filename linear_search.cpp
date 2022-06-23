#include <iostream>
using namespace std;
int searchLinear(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
          return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,4,5,66,3,7,130,889,990,1220};
    int size=sizeof(arr)/sizeof(int);
    int element=1;
    int dataSearched=searchLinear(arr,size,element);
    cout<<"after searching in linear order the element "<<element<< " was found at index "<<dataSearched<<endl;
    return 0;

}