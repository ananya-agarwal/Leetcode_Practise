class Solution {
public:
      void nextPermutation(vector<int>& nums)
      {
        int n = nums.size(), k, l;
          
    	for (k = n - 2; k >= 0; k--) 
            if (nums[k] < nums[k + 1]) 
                break;
          
    	if (k < 0) 
    	    reverse(nums.begin(), nums.end());
          
    	else 
        {
    	    for (l = n - 1; l > k; l--) 
                if (nums[l] > nums[k])
                    break;

    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }
    
};

//         next_permutation(nums, nums.size());
//         cout<<nums[0]<<" "<<nums[1]<<" "<<nums[2];
//         return 0; 
        
        //this works only for arr as an input argument
        
        
        //youtube
// given seq me kahi na kahi ek aisa point hoga jab hum peeche se travel krnge toh 2 elemtn iase mile jahan decrsng prder me ho 2 elemnts, say 13542 here jab peeche se aaynge toh 3 5 thus index1 hpgaya 1 i.e. 3 ka index then again peeche se travel krke aise elentn dhoondha jo 3 se bada hoga i.e. 4 here matlab index2= 4 ka index and then swap both elemtns and then index1+1 se last tak ke elemtns ko reverse krdiya