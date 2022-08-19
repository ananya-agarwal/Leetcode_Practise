class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
           if(mp.count(nums[i])) // when the key is already existed (duplicate) in the hashmap                                                  // then check the condition
                if(i-mp[nums[i]]<=k) 
                    return true;
            
            mp[nums[i]]= i; // nums[i] is key and index number is value 
        }
        return false;
    }
};