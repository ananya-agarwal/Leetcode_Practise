class Solution {
public:
   int removeDuplicates(vector<int>& nums) 
   {
        unordered_map<int,int>p;
        int j=0,k=0;
        for(int i=0;i<nums.size();i++)
        {
            //if(p[nums[i]]>=1)
            if(p.count(nums[i]) >= 1)
            {
                continue;
            }
            p[nums[i]]=1;
            nums[j]=nums[i];
            j++;
            k++;
        }
        return k;
    }
};