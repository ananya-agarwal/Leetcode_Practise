class Solution 
{
public:
    
    
    bool subsetSum(vector<int> nums, int sum, int n)
    {
        bool dp[n+1][sum+1];
        for(int j=0;j<sum+1;j++)
            dp[0][j]=false;
        
        for(int i=0;i<n+1;i++)
            dp[i][0]=true;
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                //nums array ke 0 pr hi check krna ha and go till nums[n-1]
                if(nums[i-1]<=j)
                {
                    dp[i][j] =  ( (dp[i-1][j-nums[i-1]]) || (dp[i-1][j]) );
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    
    bool canPartition(vector<int>& nums)
    {
        int sum=0,n=nums.size();
        
        for(int i=0;i<n;i++)
            sum += nums[i];
        
        if(sum % 2 != 0)
            return false;
        else
            return subsetSum(nums, sum/2,n);
    }
};




//return true or false ki whether u can divide the array into 2 halves such that odno me ab jo elemnts ha unka 
//sum equal aaye, agar it is possible to retrun true varna return false
//say dono partitions ka individual sum S ha toh poore array ka sum 2S ha
//agar overall array ka sum even ha tabhi use eqaully we can divide in 2 separate arrays 
//thsu odd sum ha array ke sare elemnts ka toh kabhi bhi posble hi nahi ha to divide into arrays having sum/2
//thus hume bas ab ek aise subset dhondhna ha jiska sum/2 ho sum