#include <iostream>

using namespace std;

void FibonacchiSequence(int l)
{
    cout << "0 1 1 ";
    l-=3;
    int a = 1;
    int b = 1;
    int sum = 0;
    while(l--)
    {
        sum = a+b;
        cout << sum << " ";
        a = b;
        b = sum;
    }

}

int main()
{
    cout << "Enter the length of the Fibonacci sequence: ";
    int length; cin >> length;
    cout << "The Fibonacci sequence of length " << length << " is: ";
    FibonacchiSequence(length);
    cout << "\n";
    return 0;
}

/*
Input:
    Enter the length of the Fibonacci sequence: 10

Output:
    The Fibonacci sequence of length 10 is: 0 1 1 2 3 5 8 13 21 34
*/