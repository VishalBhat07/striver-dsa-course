#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> m >> n;
    vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter the edges : ";
        cin >> u >> v;
        arr[u][v] = 1;
        arr[v][u] = 1;
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}