/* my solution 119ms */
int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    int row, col;
    int perimeter = 0;
    int connectedlands = 0;
    
    for (row = 0; row < gridRowSize; row++)
    {
        for (col = 0; col < gridColSize; col++)
        {            
            if (grid[row][col])
            {
                connectedlands = 0;
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


/* another solution 100ms */
int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
   int grith = 0;
   for(int i = 0; i < gridRowSize; i++)
   {
      for (int j = 0; j < gridColSize; j++)
      {
         if(grid[i][j] == 1)
         {
            if (((i - 1) < 0 ) || (grid[i-1][j] == 0))
            {
               grith++;
            }
            if (((j - 1) < 0 ) || (grid[i][j-1] == 0))
            {
               grith++;
            }
            if (((i + 1) >= gridRowSize ) || (grid[i+1][j] == 0))
            {
               grith++;
            }
            if (((j + 1) >= gridColSize ) || (grid[i][j+1] == 0))
            {
               grith++;
            }
         }   
      }
   }
   return grith; 
}
