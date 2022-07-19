class Solution {
public:
    void helper(int ind, vector<int>& cand, int target, vector<vector<int>> &ans, vector<int>& ds)
    {
        if(ind == cand.size())
        {
            if(target == 0)
                ans.push_back(ds);
            return;
        }
        
        if(cand[ind] <= target)
        {
            ds.push_back(cand[ind]);
            helper(ind, cand, target-cand[ind], ans, ds);
                ds.pop_back();
        }
        
    
        helper(ind+1, cand, target,ans,ds);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int> ds;
        vector<vector<int>> ans;
        
        helper(0,candidates,target,ans,ds);
        return ans;
    }
};