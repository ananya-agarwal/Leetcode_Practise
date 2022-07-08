class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        unordered_map<int, int> mp;
        int n=nums.size(), ans;
        int m=n/2;
        
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]] > m)
                ans=nums[i];
        }
        
        return ans;
    }
};