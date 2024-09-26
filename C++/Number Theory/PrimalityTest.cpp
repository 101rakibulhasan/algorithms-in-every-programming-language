#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

ll PrimeNumber(ll x)
{
    if(x<2) return 0;
    if(x == 2 || x == 3) return 1;
    if(x % 2 == 0) return 0;

    for(int i = 3; i*i <= x; i+=2){
        if(x % i == 0) return 0;
    }
    
    return 1;
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    cout << PrimeNumber(4) << endl;

    return 0;
}