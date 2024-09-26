#include <iostream>
using namespace std;

using ll = long long;
const ll MOD = 1e9+7;

ll power(ll base, ll upper) // , ll mod
{
    ll result = 1;
    while(upper)
    {
        if(upper % 2 == 1)
        {
            result = (result * base); // %mod
            upper--;
        }else
        {
            base = (base * base); // %mod
            upper/=2;
        }
    }

    return result;
}

int main()
{
    cout << power(100,5);
    return 0;
}
