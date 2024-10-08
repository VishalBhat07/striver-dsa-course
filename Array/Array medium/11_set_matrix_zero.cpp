#include <iostream>
#include <vector>
using namespace std;

// void markRow(vector<vector<int>> &matrix, int i)
// {
//     int n = matrix.size();
//     int m = matrix[0].size();

//     for (int j = 0; j < m; j++)
//     {
//         if (matrix[i][j] != 0)
//         {
//             matrix[i][j] = -1;
//         }
//     }
// }

// void markCol(vector<vector<int>> &matrix, int j)
// {
//     int n = matrix.size();
//     int m = matrix[0].size();

//     for (int i = 0; i < n; i++)
//     {
//         if (matrix[i][j] != 0)
//         {
//             matrix[i][j] = -1;
//         }
//     }
// }

void setZeroes(vector<vector<int>> &matrix)
{
    // Brute
    // int n = matrix.size();
    // int m = matrix[0].size();

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (matrix[i][j] == 0)
    //         {
    //             markRow(matrix, i);
    //             markCol(matrix, j);
    //         }
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (matrix[i][j] == -1)
    //             matrix[i][j] = 0;
    //     }
    // }

    // Better

    //     int n = matrix.size();
    //     int m = matrix[0].size();

    //     int row[n] = {0};
    //     int col[m] = {0};

    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < m; j++)
    //         {
    //             if (matrix[i][j] == 0)
    //             {
    //                 row[i] = 1;
    //                 col[j] = 1;
    //             }
    //         }
    //     }

    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < m; j++)
    //         {
    //             if (row[i] == 1 || col[j] == 1)
    //             {
    //                 matrix[i][j] = 0;
    //             }
    //         }
    //     }

    // Optimal

    int n = matrix.size();
    int m = matrix[0].size();

    int col0 = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;

                if (j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] != 0)
            {
                if (matrix[0][j] == 0 || matrix[i][0] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[0][j] = 0;
        }
    }
    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[i][0] = 0;
        }
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

    vector<vector<int>> mat = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    cout << "Original matrix : " << endl;
    print(mat);

    setZeroes(mat);

    cout << "New matrix : " << endl;
    print(mat);
    return 0;
}