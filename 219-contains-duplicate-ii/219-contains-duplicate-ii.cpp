class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        int n=nums.size();
        unordered_map<int, int> map;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(map.find(nums[i]) != map.end())
            {
                if(abs(map[nums[i]]-i) <=k)
                    return true;
                else
                    map[nums[i]] = i;
            }
            map[nums[i]] = i;
        }
        
        return false;
    }
};