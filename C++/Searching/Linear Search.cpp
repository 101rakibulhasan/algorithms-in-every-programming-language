#include<iostream>
using namespace std;

int ls(int arr[], int n, int x)
{
    for(int i = 0; i < n ; i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }

    int result = ls(arr,n,x);

    (result == -1) ? cout << "No Result Found" : cout << "The position is: " << result << endl;

    return 0;
}
