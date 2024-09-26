#include<iostream>

using namespace std;

int BinarySearch(int arr[], int n, int x  )
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
    cout << "Enter the number of elements: ";
    int length; cin >> length;
    cout << "Enter the elements in ascending order: ";
    int arr[length];
    for(int i=0; i < length; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value you want to find: ";
    int _find;
    cin >> _find;
    
    int result = BinarySearch(arr,length,_find);

    if(result == -1)
    {
        cout << "The value is not in the array\n";
    }else
    {
        cout << "The position of the value we found in the array is: " << result+1 << endl;
    }

    return 0;
}

/*
Intput:
    Enter the number of elements: 10
    Enter the elements in ascending order: 10 20 30 40 50 70 80 90 120 140
    Enter the value you want to find: 80

Output:
    The position of the value we found in the array is: 7
*/