class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int cg=INT_MIN, cl=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 1)
                cl++;
            else 
                cl=0;
            
            if(cl>cg)
                cg=cl;
        }
        return cg;
    }
};