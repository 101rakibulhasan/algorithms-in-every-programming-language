#include <iostream>
#include <cstdio>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++) 
    {
            cout << arr[i] << " ";
    }

    cout << endl;
}

void merge(int arr[], int n, int l, int r)
{
    
}

void merge_sort(int arr[], int n, int l, int r)
{
    if(l<r){
        int mid = l + (r-l)/2;
        
        merge_sort(arr,n,l,mid);
        merge_sort(arr,n,mid+1,r);
        merge(arr,n,l,r);
    }  
}

int main()
{
    int arr[5] = {10,5,1,2,8};
    merge_sort(arr,5,0,4);

    
    return 0;
}