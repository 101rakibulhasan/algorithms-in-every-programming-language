#include<iostream>

using namespace std;

void _merge(int arr[], int l, int r, int mid)
{
    int n1 = mid - l + 1;
    int n2 = r-mid;

    int arr1[n1], arr2[n2];

    for(int i = 0; i < n1; i++) arr1[i] = arr[l+i] ;
    for(int i = 0; i < n2; i++) arr2[i] = arr[mid+i+1] ;

    int i=0,j=0,k=l;

    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        arr[k] = arr1[i];
        i++; k++;
    }

    while(j < n2)
    {
        arr[k] = arr2[j];
        j++; k++;
    }
}

void mergeSort(int arr[], int n, int l, int r)
{
    if(l<r)
    {
        int mid = l + (r-l)/2;
        mergeSort(arr,n,l,mid);
        mergeSort(arr,n,mid+1,r);
        _merge(arr,l,r,mid);
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

    int l = 0, r = n-1;
    mergeSort(arr,n, l, r);

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
