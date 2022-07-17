//M1: n^3: 3 loops to find the reqd sum
//M2: n^2logn: 2 loops and teesre ko dhondhege as neg of sum of other 2
//M3: n^2: 1 loop lagaya of i and bache hue sorted array me j and k ko aage
//and peeche se move krrhe ha to get the neg of i 

class Solution{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> ans ;
        
        int n = nums.size() ;
        
        for(int i=0; i<n; i++)
        {
            while(i != 0 && i < n && nums[i-1] == nums[i]) // i != 0 bcs i-1 will give error then
                i++ ;
            
            int j = i+1, k = n-1; 
            
            while(j < k)
            {
                int sum = nums[i]+nums[j]+nums[k] ;
                
                if(sum == 0)
                    ans.push_back({nums[i], nums[j++], nums[k--]}) ;
                
                else if(sum < 0)
                    j++ ;
                
                else
                    k-- ;
                
                while(j != i+1 && j < k && nums[j-1] == nums[j])
                    //j<k check kara kyuki bcs of line 32 and 35
                    
                    j++ ;
                while(k != n-1 && j < k && nums[k+1] == nums[k])
                    k-- ;
            }
        }
        
        return ans ;
    }
};