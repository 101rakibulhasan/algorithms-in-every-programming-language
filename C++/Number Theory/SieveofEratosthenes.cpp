#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

void soe(int n)
{
    int arr[n+1] = {0};
    arr[1] = 1;
    for(int i = 2; i*i <= n; i++)
    {
        if(arr[i] == 0)
        {
            for(int j = i*i; j <=n; j+= i)
            {
                arr[j] = 1;
            }
        }
    }

    for(int i = 1; i <=n; i++)
    {
        if(arr[i] == 0) cout << i << " ";
    }
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    soe(30);

    return 0;
}