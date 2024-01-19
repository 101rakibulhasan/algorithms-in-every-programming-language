#include <iostream>
using namespace std;

using ll = long long;

// The purpose of this function is to get co-factors pairs from 1...n whose gcd = 1

ll etf(ll n)
{
    // generate prime factors with powers
    int ans = n;
    for(int i = 2; i*i <=n;i++)
    {
        while(n%i == 0) n/=i;

        ans *= (i-1);
        ans /= i;
    }

    if(n>1)
    {
        ans *= (n-1);
        ans /= n;
    }

    return ans;
}

int main()
{
    int x; cin >> x;
    cout << etf(x) << endl;
    return 0;
}