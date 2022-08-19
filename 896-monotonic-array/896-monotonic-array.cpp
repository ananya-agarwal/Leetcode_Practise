class Solution {
public:
    bool isMonotonic(vector<int>& nums)
    {
        int n=nums.size();
        int c1=0,c2=0;
        
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<=nums[i+1])
                c1++;
            else
                break;
        }
        
        if(c1 == n-1)
            return true;
        
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>=nums[i+1])
                c2++;
            else
                break;
        }
        
        if(c2 == n-1)
            return true;
        
        return false;
    }
};