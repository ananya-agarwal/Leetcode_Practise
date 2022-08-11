class Solution
{
public:
    
    int helper(int n, vector<int>& cost, int ind, vector<int>&dp)
    {
        if(ind>=n)
            return 0;
        
        if(dp[ind]!=-1)
            return dp[ind];
        
        return dp[ind] = cost[ind] + min( helper(n, cost, ind+1, dp), helper(n, cost, ind+2, dp) );
    }
    
    int minCostClimbingStairs(vector<int>& cost)
    {
        int n=cost.size();
        vector<int> dp(n+1, -1);
        
        return min( helper(n, cost, 0, dp), helper(n, cost, 1, dp) );
    }
};