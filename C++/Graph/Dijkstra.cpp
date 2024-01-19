#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

#define endl "\n"
#define all(x) (x).begin(), (x).end()

const ld pi = acos(-1);
const ll MOD = 1000000007;
const ll N = 1e5+7;

ll adj_matrix[1000][1000];
ll visited[1000] = {0};
ll nodes_sp[1000];

void dijkstra(ll src, ll nodes)
{
    nodes_sp[src] = 0;
    visited[src] = 1;

    //INITIALIZE NEW DISTANCE FOR nodes_sp
    for (ll i = 0; i < nodes; i++)
    {
        ll _min =INT_MAX, _min_ind = 0;
        for (ll j = 0; j < nodes; j++)
        {
            if(j == i) continue;
            if(adj_matrix[i][j] != -1)
            {
                ll x = adj_matrix[i][j] + nodes_sp[i];
                if(_min > x)
                {
                    _min = x;
                    _min_ind = j;
                }
            }
        }

        cout <<"FUNCK: " << _min_ind << endl;
        ll new_weight = adj_matrix[i][_min_ind] + nodes_sp[i];
        if(visited[_min_ind] == 0)
        {
            visited[_min_ind] = 1;
            nodes_sp[_min_ind] = new_weight;
        }
        
    }
     
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    memset(adj_matrix,-1,sizeof(adj_matrix)); 
    fill_n(nodes_sp, sizeof(nodes_sp) / sizeof (nodes_sp[0]), INT_MAX);

    ll nodes, edges; cin >> nodes >> edges;
    while(edges--)
    {
        ll x,y,w; cin >> x >> y >> w;
        adj_matrix[x][y] = w;
        adj_matrix[y][x] = w;
    }

    ll src, dest; cin >> src >> dest;

    for(ll i = 0; i < nodes; i++)
    {
        for (ll j = 0; j < nodes; j++)
        {
            cout << adj_matrix[i][j] << " ";
        }   
        cout << endl;
    }

     dijkstra(src, nodes);

    for(ll i=0; i < nodes; ++i)
    {
        cout << nodes_sp[i] << " ";
    }

    cout << endl;

    return 0;
}