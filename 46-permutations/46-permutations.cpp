class Solution {
public:
    
    //method1: recursion
    
    void helper(vector<int> &nums, vector<int> &freq, vector<vector<int>> &ans, vector<int> &ds)
    {
        if(ds.size() == nums.size())
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                helper(nums, freq, ans, ds);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums)
    {
        int n=nums.size();
        vector<int> freq(n,0);
        vector<vector<int>> ans;
        vector<int> ds;
        helper(nums, freq, ans, ds);
        return ans;
    }
};