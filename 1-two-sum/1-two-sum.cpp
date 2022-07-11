class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> mp;
        int n=nums.size();
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            int f=target-nums[i];
            if(mp.find(f) != mp.end())
            {
                ans.push_back(mp[f]);
                ans.push_back(i);
                return ans;
            }
            else
                mp[nums[i]]=i;
        }
        return ans;
    }
};


// int n=nums.size();
// vector<int> ans;

// for(int i=0;i<n;i++)
// {
//     for(int j=i+1;j<n;j++)
//     {
//         if(nums[i]+nums[j] == target)
//         {
//             ans.push_back(i);
//             ans.push_back(j);
//         }
//     }
// }
// return ans;

//method2: sort karo and left and right pointer ko move krte raho

//method 3: taregt me se current index vale ko minus karo and check if it is alredy in hash table varna insert it in the hash table
//kyuki hash table me toh insertion aur finding ki complexity toh O(1) hi lagti ha bas sirf nums array me traversal ki complexty ha O(N)