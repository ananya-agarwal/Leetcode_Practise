class Solution {
public:
    void solve(int &c, int sum, int i, vector<int>& nums, int target)
    {
        int n = nums.size();
        if(i == n) 
        {
            if(sum == target) 
                c++;
            //1 sol aagyaa and return kr gaye
            return;
        }    
        
        solve(c, sum-nums[i], i+1, nums, target);
        solve(c, sum+nums[i], i+1, nums, target);
        //har number ko 1 baari plus and 1 baari minus krke we r seeing ki whther 
        //we r able to achve the reqd sum
        
    }
    
    int findTargetSumWays(vector<int>& nums, int target) 
    {
        int c = 0;
        solve(c, 0, 0, nums, target);
        return c;
    }
};


//method 2

//it is same as dividing all the elements in 2 classes, + and - 
//sum up all the elemnts of a class minus sum up all the elemnts of another class
//s1-s2=diff
//s1 is the sum of all elements of class say +, s2 is the sum of all eleemnts of class -

//approach: we know that sum of all the elemnts in both classes is equal to the sum of all elemnts of array

//given 2 eqns, s1-s2=d...s1+s2=sum of all elements of array
//solve both of these simultnsly 
//we can find the value of sum of 1 subset 



