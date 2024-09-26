#include <iostream>

using namespace std;

void BubbleSort(int arr[], int n)
{
    int flag = 1;
    while(flag)
    {
        flag = 0;
        for(int i=0; i < n-1; i++)
        {
            if(arr[i]> arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                flag = 1;
            }
        }
    }

}

void PrintArr(int l[], int n)
{
    for(int i=0; i < n; i++)
    {
        cout << l[i] << " ";
    }
    cout << '\n';
}


int main()
{
    cout << "Enter the number of elements: ";
    int n; cin >> n;
    cout << "Enter the elements: ";
    int arr[n];
    for(int i=0; i < n; i++)
    {
        cin >> arr[i];
    }

    BubbleSort(arr,n);

    cout << "Sorted array: ";
    PrintArr(arr,n);
    return 0;
}

/*
Input:
    Enter the number of elements: 10
    Enter the elements: 5 9 1 3 0 4 7 2 6 8

Output:
    Sorted array: 0 1 2 3 4 5 6 7 8 9
*/