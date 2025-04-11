#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfs(int V, vector<int> adj[])
{
    vector<int> visited(V, 0);
    visited[0] = 1;

    queue<int> q;
    vector<int> bfs;
    q.push(0);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (auto it : adj[node])
        {
            if (!visited[it])
            {
                visited[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
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

    vector<int> result = bfs(n, arr);

    for (auto it : result)
        cout << it << " ";
}