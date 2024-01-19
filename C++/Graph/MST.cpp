#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

long long int n= 1e5;

vector<vector<int>> v;
int visited[n] = {0};

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int v,e; cin >> v >> e;
    for(int i = 0; i < e; i++)
    {
        int p,x,y; cin >> p >> x >> y;
        v.push_back({p,x,y});
    }

    sort(v.begin(), v.end());

    int cost = 0;

    for(auto i: v)
    {
        int w = i[0];
        int u = i[1];
        int v = i[2];
        int x = find_set(u);
        int y = find_set(v);

        if(x==y)
        {
            continue;
        }else
        {
            cost+=w;
            cout << u << " " << v << endl;
        }
    }



    return 0;
}