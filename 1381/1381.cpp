#include <iostream>
#include <set>
#include <vector>

using namespace std;

// complexidade: O(n*m)

int main()
{
    vector<vector<int>> sudoku(9, vector<int>(9, 0));

    // vector<int> matriz(N.M, 0);

    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            cin >> sudoku[i][j];
        }
    }

    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            cout << sudoku[i][j];
        }
    }
    return 0;
}