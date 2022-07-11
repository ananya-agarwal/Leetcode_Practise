class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        int n=nums.size(),sg=1,sl=1;
        if(n==0)
            return 0;
        
        sort(nums.begin(), nums.end());
        nums.erase( unique(nums.begin(), nums.end() ), nums.end() );
        
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]+1 == nums[i+1])
            {
                sl++;
                if(sl>sg)
                    sg=sl;
            }
            else
                sl=1;
        }
        return sg;
    }
};