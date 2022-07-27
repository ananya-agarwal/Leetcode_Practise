class Solution {
public:
    
    
    // method to validate the adjacent position
    bool validateAdjacent(vector<vector<int>>& grid, int rows, int cols, int row, int col){
        
        if (row < 0 || row >= rows || col < 0 || col >= cols)
            return false;
        
        return true;
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        
        /* This problem will be solved using the BFS Alog. */
        
        // define an int number representing min
        int min = 0;
        
        // define the size for rows and cols
        int rows = grid.size();
        int cols = grid[0].size();
        
        // define a queue to store every src vertix (rotten orange) as its index {row, col}
        queue<pair<int, int>> Q;
        
        // bool flag to check if there are not fresh oranges, so return zero
        bool freshOranges = false; 
            
        // iterate over the grid to get all the source vertices to the queue, and if there aren't sources, return -1
        for (int row = 0; row < rows; row++)
            for (int col = 0; col < cols; col++){
                if (grid[row][col] == 2)
                    Q.push({row, col});
                
                if (grid[row][col] == 1)
                    freshOranges = true;
            }
        
        if (!freshOranges)
            return 0;
        
        // check if there are no rotten oranges and return -1
        if (Q.empty())
            return -1;
        
        
        // put an barrier between each level or each number of oranges that will rotten after a min
        Q.push({-1, -1});
        
        
        // while Q is not empty, iterate over each source (rotten orange)
        // 1) Check if the barrier between every to be rotten after a min oranges has reached or not, if yes increase the min by one or:
        
        // 2) get the all adgacents if exist (validate positions)
        // 3) if at least one adjacent is fresh  
              // b) update its value in the grid to 2 
              // c) push it to the Q

        
        while(!Q.empty()){
            
            int currrow = Q.front().first;
            int currcol = Q.front().second;
            
            Q.pop();
            
            // check if the barrier has reached
            if ((currrow == -1 && currcol == -1) && !Q.empty()){
                
                min++;
                Q.push({-1, -1});
                
            }
                
            // validate and check for every adjacent
            
            
            
            // left
            if (validateAdjacent(grid, rows, cols, currrow, currcol-1)  && grid[currrow][currcol-1] == 1){
                    grid[currrow][currcol-1] = 2;
                    Q.push({currrow, currcol-1});
                    
            }
            
            
            // right
            if (validateAdjacent(grid, rows, cols, currrow, currcol+1)  && grid[currrow][currcol+1] == 1){
                    grid[currrow][currcol+1] = 2;
                    Q.push({currrow, currcol+1});
                    
            }
            
            
            
            
            // top
            if (validateAdjacent(grid, rows, cols, currrow-1, currcol)  && grid[currrow-1][currcol] == 1){
                    grid[currrow-1][currcol] = 2;
                    Q.push({currrow-1, currcol});
                    
            }

            
            // buttom
            if (validateAdjacent(grid, rows, cols, currrow+1, currcol)  && grid[currrow+1][currcol] == 1){
                    grid[currrow+1][currcol] = 2;
                    Q.push({currrow+1, currcol});
                    
            }
         
            
        }
        
        
        // iterate over the grid to check if all the oranges got rotten or not
        for (int row = 0; row < rows; row++)
            for (int col = 0; col < cols; col++)
                if (grid[row][col] == 1){
                    min = -1;
                    break;
            }
        

        
      // finally return the min 
      return min;
        
    }
};