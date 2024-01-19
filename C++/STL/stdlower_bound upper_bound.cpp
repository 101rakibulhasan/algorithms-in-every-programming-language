#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

#define endl "\n"
#define all(x) (x).begin(), (x).end()

const ld pi = acos(-1);
const ll MOD = 1000000007;
const ll N = 1e5+7;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    vector<ll> vec = {5,4,1,3,6,7,4,6,7,8};

    sort(all(vec));

    for(ll unsigned i = 0;i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;   

    auto lb = lower_bound(all(vec), 2); // not existing 
    cout << "Lower Bound (not exists 2): " << *lb <<endl;
    auto lb1 = lower_bound(all(vec), 3); // existing 
    cout << "Lower Bound (exists 3): " << *lb1 <<endl;
    auto lb2 = lower_bound(all(vec), 9); // not in vector
    cout << "Lower Bound (not in vector 9): " << *lb2 <<endl;

    auto ub = upper_bound(all(vec), 2); // not existing 
    cout << "Upper Bound (not exists 2): " << *ub <<endl;
    auto ub1 = upper_bound(all(vec), 3); // existing 
    cout << "Upper Bound (exists 3): " << *ub1 <<endl;
    auto ub2 = upper_bound(all(vec), 9); // not in vector
    (ub2 == vec.end()) ? cout << "Upper Bound(Not in vector 9) not exists " <<endl : cout << "Upper Bound(Exists in vector 9) : " << *ub2 <<endl;
    
    return 0;
}