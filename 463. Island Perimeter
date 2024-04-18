class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int perimeter = 0, row = grid.size(), column = grid[0].size();
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (grid[i][j] == 0)
                    continue;
                // Either top row, or row above is water
                perimeter += (i == 0 || grid[i - 1][j] == 0) +
                       // Either end row or the row after is water
                       (i == row - 1 || grid[i + 1][j] == 0) +
                       // Either first column or column behind is water
                       (j == 0 || grid[i][j - 1] == 0) +
                       // Either last column or the column after is water
                       (j == column - 1 || grid[i][j + 1] == 0);
            }
        }
        return perimeter;
    }
};
