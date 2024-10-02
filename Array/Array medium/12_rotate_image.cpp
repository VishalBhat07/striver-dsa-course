#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    // Brute

    // vector<vector<int>> temp;
    // int n = matrix.size();

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         temp[j][n - 1 - i] = matrix[i][j];
    //     }
    // }

    // Optimal
 
    int n = matrix.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

void print(vector<vector<int>> mat)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Original Matrix : " << endl;
    print(mat);

    rotate(mat);

    cout << "Rotated Matrix : " << endl;
    print(mat);

    return 0;
}