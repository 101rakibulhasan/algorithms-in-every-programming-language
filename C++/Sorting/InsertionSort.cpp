#include <iostream>

using namespace std;

void InsertionSort(int x[], int n)
{
    for (int index = 1; index < n; index++) 
    {
        int holder = x[index];
        int j = index-1;
        while (x[j] > holder && j>=0) 
        {
            x[j+1] = x[j];
            j--;
        }

        j++;

        x[j] = holder;  
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

    InsertionSort(arr, n);

    cout << "Sorted array: ";
    PrintArr(arr, n);
    
    return 0;
}

/*
Input:
    Enter the number of elements: 10
    Enter the elements: 10 9 8 7 6 5 4 3 2 1

Output:
    Sorted array: 1 2 3 4 5 6 7 8 9 10
*/