#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> arr[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cout << "Enter the edges : ";
        cin >> u >> v >> wt;
        arr[u].push_back({v, wt});
        arr[v].push_back({u, wt});
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
            cout << "(" << arr[i][j].first << ", " << arr[i][j].second << ")" << " ";
        cout << endl;
    }
}