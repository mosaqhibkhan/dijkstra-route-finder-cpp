#include <iostream>
#include <queue>
#include <climits>
using namespace std;

struct Edge
{
    int dest;
    int weight;
    Edge* next;
};

Edge* adj[100];

void addEdge(int u, int v, int w)
{
    Edge* newEdge = new Edge;
    newEdge->dest = v;
    newEdge->weight = w;
    newEdge->next = adj[u];
    adj[u] = newEdge;
}

void printPath(int parent[], int j)
{
    if (parent[j] == -1)
    {
        cout << j;
        return;
    }

    printPath(parent, parent[j]);
    cout << " -> " << j;
}

void dijkstra(int n, int src, int dest)
{
    int dist[100];
    int parent[100];

    for(int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
        parent[i] = -1;
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        Edge* temp = adj[u];

        while(temp != NULL)
        {
            int v = temp->dest;
            int weight = temp->weight;

            if (dist[u] + weight < dist[v])
            {
                dist[v] = dist[u] + weight;
                parent[v] = u;
                pq.push({dist[v], v});
            }

            temp = temp->next;
        }
    }

    if (dist[dest] == INT_MAX)
    {
        cout << "No route found.\n";
        return;
    }

    cout << "\nShortest Distance: " << dist[dest] << endl;
    cout << "Route: ";
    printPath(parent, dest);
    cout << endl;
}

int main()
{
    int n, m;

    cout << "Enter number of cities: ";
    cin >> n;

    for(int i = 0; i < n; i++)
        adj[i] = NULL;

    cout << "Enter number of roads: ";
    cin >> m;

    cout << "Enter roads (city1 city2 distance):\n";

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        addEdge(u, v, w);
        addEdge(v, u, w);
    }

    int src, dest;

    cout << "Enter source city: ";
    cin >> src;

    cout << "Enter destination city: ";
    cin >> dest;

    dijkstra(n, src, dest);

    return 0;
}
