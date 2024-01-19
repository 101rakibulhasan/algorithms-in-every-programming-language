#include <iostream>
using namespace std;

void fib(int l)
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
    int length; cin >> length;
    fib(length);
    return 0;
}