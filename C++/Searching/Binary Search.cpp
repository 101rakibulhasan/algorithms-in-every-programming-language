#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int x  )
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int mid = l + (r-l)/2;
        if(arr[mid] == x)
        {
            return mid;
        }else if(arr[mid] > x)
        {
            r = mid - 1;
        }else
        {
            l = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10,30,45,50,55,60,90};
    int _find = 5;

    int length = sizeof(arr)/sizeof(arr[0]);

    int result = binary_search(arr,length,_find);

    if(result == -1)
    {
        cout << "The find value is not in the array\n";
    }else
    {
        cout << "The position of the value we found in the array is: " << result << endl;
    }

    return 0;
}
