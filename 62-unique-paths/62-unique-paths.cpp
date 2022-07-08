class Solution {
public:
    
    int helper(int i, int j, int m, int n, vector<vector<int>> &dp)
    {
        if(i==m-1 && j== n-1)
            return 1;
        
        if(i>=m || j>=n)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        return dp[i][j]=helper(i+1,j,m,n,dp)+helper(i,j+1,m,n,dp);
    }
    
    int uniquePaths(int m, int n) 
    {
        vector<vector<int>> dp(m+1, vector<int>( (n+1), -1));
        return helper(0,0,m,n,dp);
    }
};

//     //brute force gives TLE
//     int helper(int i, int j, int m, int n)
//     {
//         if(i==(m-1) && j==(n-1))
//             return 1;
        
//         if(i>=m || j>=n)
//             return 0;
        
//         else return helper(i+1,j,m,n) + helper(i,j+1,m,n);
//     }
    
//     int uniquePaths(int m, int n) 
//     {
//         return helper(0,0,m,n);
//     }
