#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

#define endl "\n";
#define all(x) (x).begin(), (x).end();

const ld pi = acos(-1);
const ll MOD = 1000000007;
const ll N = 1e5+7;

vector<ll> prime_factors(ll n)
{
    vector<ll> tmp;
    for(int i=2; i*i <= n; i++)
    {
        while(n%i == 0)
        {
            n/=i;
            tmp.emplace_back(i);
        }
    }

    if(n>1) tmp.emplace_back(n);

    return tmp;
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    ll n; cin >> n;

    // requires gen_prime_factors_func
    vector<ll> vec = prime_factors(n);
    for(ll unsigned i = 0;i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    // removes duplicate values and rsizes vector
    auto newEnd = unique(vec.begin(), vec.end());
    cout << *newEnd << endl;
    vec.resize(distance(vec.begin(),newEnd));
    cout << vec.size() << endl;

    return 0;
}