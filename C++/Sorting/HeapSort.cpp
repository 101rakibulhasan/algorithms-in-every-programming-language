#include <iostream>
using namespace std;

int heap(int arr[],int i,int length)
{
    int minimum = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < length && arr[left] < arr[minimum])
    {
        minimum = left ;
    }

    if(right < length && arr[right] < arr[minimum])
    {
        minimum = right ;
    }

    if(minimum != i)
    {
       swap(arr[i], arr[minimum]);
       heap(arr, minimum,length);
    }
}

int heapSort(int arr[],int i,int length)
{
    swap(arr[0], arr[i]);
    heap(arr,i, 0);
}

int main()
{
    int arr[5] = {5,200,543,2,9};
    int lastNode = (5/2)-1;

    for(int i = lastNode; i >= 0; i--)
    {
        heap(arr,i,5-i-1);
    }

    for(int i = 5-1; i >= 0; i--)
    {
        heapSort(arr,i,5);
    }

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] <<" ";
    }

    return 0;
}
