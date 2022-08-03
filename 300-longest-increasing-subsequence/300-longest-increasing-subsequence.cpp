class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        int n = nums.size();
        
        if(n==1)
            return 1;
        
        vector<int> v;
        v.push_back(nums[0]);
        
        for(int i=1;i<n;i++)
        {
            if(v.back()<nums[i])
                v.push_back(nums[i]);
            else if(v.back() == nums[i])
                continue;
            else
            {
                 int low=0, high=v.size()-1;
                while(low<=high)
                {
                    int mid=(low+high)/2;
                    if(v[mid]>=nums[i])
                        high=mid-1;
                    else
                        low=mid+1;
                }
                v[low]=nums[i];
            }
        }
        return v.size();
    }
};