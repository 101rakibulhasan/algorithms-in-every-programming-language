#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

#define endl "\n"
#define all(x) (x).begin(), (x).end()

const ld pi = acos(-1);
const ll MOD = 1000000007;
const ll N = 1e5+7;

int visited[N];
int level[N];
vector<int>adj_list[N];
vector<int>bfs_nodes[N];
void bfs(int src) {
    queue<int>q;
    visited[src] = 1;
    level[src] = 0; // new line added
    q.push(src);

    while(!q.empty()) {
        int head = q.front();
        bfs_nodes->push_back(head);
        q.pop();

        for(int adj_node: adj_list[head]) {
            if(visited[adj_node] == 0) {
                visited[adj_node] = 1;

                level[adj_node] = level[head] + 1; // new line added

                q.push(adj_node);
            }
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int root, edges;
        cin >> root >> edges;
    
        for(int i = 0 ; i < edges ; i++) {
            int u, v;
            cin >> u >> v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
    
        bfs(root);

    return 0;
}