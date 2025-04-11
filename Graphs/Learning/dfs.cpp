#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void dfsHelper(int node, vector<int> adj[], vector<int> &vis, vector<int> &dfs)
{
    vis[node] = 1;
    dfs.push_back(node);

    for (auto it : adj[node])
        if (!vis[it])
            dfsHelper(it, adj, vis, dfs);
}

vector<int> dfs(int V, vector<int> adj[])
{
    vector<int> visited(V, 0);
    vector<int> dfs;

    dfsHelper(0, adj, visited, dfs);

    return dfs;
}

int main()
{
    int n, m;
    cout << "Enter vertices and edges count :";
    cin >> n >> m;
    vector<int> arr[n];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter the edges : ";
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    vector<int> result = dfs(n, arr);

    for (auto it : result)
        cout << it << " ";
}