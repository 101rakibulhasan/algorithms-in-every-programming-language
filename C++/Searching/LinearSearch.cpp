#include<iostream>

using namespace std;

int LinearSearch(int arr[], int n, int x)
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
    cout << "Enter the number of elements: ";
    int length; cin >> length;
    cout << "Enter the elements: ";
    int arr[length];
    for(int i=0; i < length; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value you want to find: ";
    int _find;
    cin >> _find;

    int result = LinearSearch(arr,length,_find);

    if (result == -1) 
    {
        cout << "No Result Found";
    }else
    {
        cout << "The position is: " << result+1 << endl;
    }

    return 0;
}

/*
Input:
    Enter the number of elements: 10
    Enter the elements: 9 8 7 6 4 3 2 1 0 5
    Enter the value you want to find: 5

Output:
    The position is: 10

*/
