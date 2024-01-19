#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

const int N = 1e5+2;
vector<ll> nodeswithedges[N];
ll visited[N] ={0};
void dfs(int rootNode)
{
    //preorder
    visited[rootNode] = 1;
    cout << rootNode << " ";
    //inorder
    for(int i = 0; i < nodeswithedges[rootNode].size(); i++)
    {
        if(visited[nodeswithedges[rootNode][i]] == 0)
        {
            dfs(nodeswithedges[rootNode][i]);
        }
    }
    //postorder
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int totalNodes, rootNode; cin >> totalNodes >> rootNode;
    int l = totalNodes;
    while(l--)
    {
        int x,y; cin >> x >> y;
        nodeswithedges[x].push_back(y);
        nodeswithedges[y].push_back(x);
    }

    // for(int i=0; i < totalNodes; i++)
    // {
    //     cout << "Node: "<< i << ", Edges: ";
    //     for(int j = 0; j < nodeswithedges[i].size(); j++)
    //     {
    //         cout << nodeswithedges[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    dfs(1);
    return 0;
}