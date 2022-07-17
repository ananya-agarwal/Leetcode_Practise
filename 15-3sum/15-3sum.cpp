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
        
        for(int i=0; i<n-2; i++)
        {
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                
                int j = i+1, k = n-1,sum=0-nums[i]; 
                while(j < k)
                {

                    if(nums[j]+nums[k] == sum)
                    {
                        ans.push_back({nums[i], nums[j], nums[k]}) ;

                        while(j < k && nums[j] == nums[j+1])
                            j++ ;

                        while(j<k && nums[k-1] == nums[k])
                            k-- ;

                        j++,k--;
                    }
                    else if(nums[j]+nums[k] < sum)
                        j++;
                    else
                        k--;

                }
            }
            
        }
        
        return ans ;
    }
};