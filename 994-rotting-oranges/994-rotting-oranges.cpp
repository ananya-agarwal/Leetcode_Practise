class Solution {
public:
    
    
    // method to validate the adjacent position
    bool validateAdjacent(vector<vector<int>>& grid, int rows, int cols, int row, int col)
    {
        
        if (row < 0 || row >= rows || col < 0 || col >= cols)
            return false;
        
        return true;
    }
    
    int orangesRotting(vector<vector<int>>& grid)
    {
        
        int min = 0, rows = grid.size(), cols = grid[0].size();
        queue<pair<int, int>> Q;
        bool freshOranges = false; 

        
        for (int row = 0; row < rows; row++)
            for (int col = 0; col < cols; col++)
            {
                if (grid[row][col] == 2)
                    Q.push({row, col});
                
                if (grid[row][col] == 1)
                    freshOranges = true;
            }
        
        
        
        if (!freshOranges)
            return 0;

        if (Q.empty())
            return -1;
        
        Q.push({-1, -1});

        while(!Q.empty())
        {
            
            int currrow = Q.front().first;
            int currcol = Q.front().second;
            Q.pop();
            
            if ((currrow == -1 && currcol == -1) && !Q.empty())
            {
                min++;
                Q.push({-1, -1});
            }
            
            if (validateAdjacent(grid, rows, cols, currrow, currcol-1)  && grid[currrow][currcol-1] == 1)
            {
                    grid[currrow][currcol-1] = 2;
                    Q.push({currrow, currcol-1});
            }
            
            if (validateAdjacent(grid, rows, cols, currrow, currcol+1)  && grid[currrow][currcol+1] == 1)
            {
                    grid[currrow][currcol+1] = 2;
                    Q.push({currrow, currcol+1});
            }
            
            if (validateAdjacent(grid, rows, cols, currrow-1, currcol)  && grid[currrow-1][currcol] == 1)
            {
                    grid[currrow-1][currcol] = 2;
                    Q.push({currrow-1, currcol});       
            }

            if (validateAdjacent(grid, rows, cols, currrow+1, currcol)  && grid[currrow+1][currcol] == 1)
            {
                    grid[currrow+1][currcol] = 2;
                    Q.push({currrow+1, currcol});    
            }  
        }
        
        for (int row = 0; row < rows; row++)
            for (int col = 0; col < cols; col++)
                if (grid[row][col] == 1)
                {
                    min = -1;
                    break;
                 }

        
      return min;
        
    }
};