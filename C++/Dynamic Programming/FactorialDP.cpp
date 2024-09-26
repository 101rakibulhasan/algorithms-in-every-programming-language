#include<iostream>

using namespace std;

int arr[100001];

void FactorialDP()
{
    arr[0] = 1;
    arr[1] = 1;
    for (int index = 2; index < 100001; index++){
        arr[index] = arr[index-1] * index;
    }
}

int main()
{
    
    FactorialDP();

    cout << "Enter the number: ";
    int x; cin >> x;
    cout << "The factorial of " << x << " is " << arr[x] << endl;
    return 0;
}

/*
Input:
    Enter the number: 12

Output:
    The factorial of 12 is 479001600
*/