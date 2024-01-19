#include <bits/stdc++.h>
using namespace std;

class Graph{
    int totalVertexNumber;
    vector<list<int>> adj;

public:
    Graph(int totalVertexNumber);
    void addEdge(int a, int b);
    void BFS(int currentVertex);
};

Graph::Graph(int totalVertexNumber)
{
    this->totalVertexNumber = totalVertexNumber;
    adj.resize(totalVertexNumber);
}

void Graph::addEdge(int a, int b)
{
    adj[a].push_back(b);
}

void Graph::BFS(int currentVertex)
{
    vector<bool> visited;
    visited.resize(totalVertexNumber, false);

    list <int> queue;

    visited[currentVertex]  = true;
    queue.push_back(currentVertex);

    while(!queue.empty())
    {
        currentVertex = queue.front();
        cout << currentVertex << " ";
        queue.pop_front();

        for(auto adjacent : adj[currentVertex])
        {
            if(!visited[adjacent])
            {
                visited[adjacent] = true;
                queue.push_back(adjacent);
            }
        }
    }
}


int main()
{
    Graph g(6);
    // g.addEdge(0, 1);
    // g.addEdge(0, 2);
    // g.addEdge(1, 2);
    // g.addEdge(2, 0);
    // g.addEdge(2, 3);
    // g.addEdge(3, 3);

    // g.addEdge(1, 2);
    // g.addEdge(1, 3);
    // g.addEdge(1, 4);
    // g.addEdge(1, 5);

    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(5, 4);
    g.addEdge(3, 5);


    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(1);
    return 0;
}