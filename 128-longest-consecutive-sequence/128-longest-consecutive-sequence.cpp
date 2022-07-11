class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
      set < int > hashSet;
      for (int num: nums)
        hashSet.insert(num);

      int longestStreak = 0;

      for (int num: nums) {
        if (!hashSet.count(num - 1))
        {
          int currentNum = num;
          int currentStreak = 1;

          while (hashSet.count(currentNum + 1))
          {
            currentNum += 1;
            currentStreak += 1;
          }

          longestStreak = max(longestStreak, currentStreak);
        }
    }
    return longestStreak;
}
};


//int n=nums.size(),sg=1,sl=1;
//         if(n==0)
//             return 0;
        
//         sort(nums.begin(), nums.end());
//         nums.erase( unique(nums.begin(), nums.end() ), nums.end() );
        
//         for(int i=0;i<n-1;i++)
//         {
//             if(nums[i]+1 == nums[i+1])
//             {
//                 sl++;
//                 if(sl>sg)
//                     sg=sl;
//             }
//             else
//                 sl=1;
//         }
//         return sg;