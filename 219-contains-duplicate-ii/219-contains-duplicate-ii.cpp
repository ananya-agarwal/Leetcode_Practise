class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int,int>hash;

        for(int i=0;i<nums.size();i++)
        {
           if(hash.count(nums[i])) // when the key is already existed (duplicate) in the hashmap                                                  // then check the condition
                if(i-hash[nums[i]]<=k) 
                    return true;
            
            hash[nums[i]]= i; // nums[i] is key and index number is value 
        }
        return false;
    }
};