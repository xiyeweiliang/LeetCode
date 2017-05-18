int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    int row, col;
    int perimeter = 0;
    int connectedlands = 0;
    
    for (row = 0; row < gridRowSize; row++)
    {
        for (col = 0; col < gridColSize; col++)
        {
            connectedlands = 0;
            if (grid[row][col])
            {
                if ((row - 1) >= 0)
                    connectedlands += grid[(row - 1)][col];

                if ((row + 1) < gridRowSize)
                    connectedlands += grid[(row + 1)][col];

                if ((col - 1) >= 0)
                    connectedlands += grid[row][(col - 1)];

                if ((col + 1) < gridColSize)
                    connectedlands += grid[row][(col + 1)];
                    
                perimeter +=  4 - connectedlands;
            }
        }
    }
    
    return perimeter;
}
