#include <iostream>

using namespace std;

void SelectionSort(int x[], int n)
{
    for (int index = 0; index < n; index++) {
        int min = INT8_MAX;
        int min_id = 0;
        bool found = false;
        for (int j = index; j < n; j++) {
            if(min> x[j])
            {
                min = x[j];
                min_id = j;
                found = true;
            } 
        }

        if(found)
        {
            int temp = x[index];
            x[index] = min;
            x[min_id] = temp;
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

    SelectionSort(arr, n);

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