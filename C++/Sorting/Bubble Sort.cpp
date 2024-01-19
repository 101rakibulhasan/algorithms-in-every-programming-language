#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n)
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
}


int main()
{
    int arr[10] = {5,9,1,3,0,4,7,2,6,8};
    bubble(arr,10);
    PrintArr(arr,10);
    return 0;
}