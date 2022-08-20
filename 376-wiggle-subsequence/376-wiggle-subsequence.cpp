class Solution {
public:
    
    int wiggleMaxLength(vector<int>& nums)
    {
        int n = nums.size();
        int peak = 0, valley = 0;
        
        for(int i=1; i<n; i++) {
            if(nums[i] > nums[i-1]) peak = valley + 1;
            else if(nums[i] < nums[i-1]) valley = peak + 1;
        }
        
        return 1 + max(peak, valley);
    }
};