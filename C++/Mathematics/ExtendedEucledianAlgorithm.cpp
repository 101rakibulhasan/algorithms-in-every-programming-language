#include <iostream>
using namespace std;

using ll = long long;

//Bézout's identity (ax + by = gcd(a, b))
ll extendedGCD(ll a, ll b, ll &x, ll &y)
{
    if(b==0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = extendedGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1*(a/b);
    return d;
}

int main()
{
    ll a,b,x,y;
    cin >> a >> b;
    cout << extendedGCD(a, b, x, y) << endl;
    cout << x << " " << y << endl;
    return 0;
}