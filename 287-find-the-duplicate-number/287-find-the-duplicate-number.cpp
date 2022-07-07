class Solution {
public:
    int findDuplicate(vector<int>& arr) 
    {
//         sort(arr.begin(), arr.end());
//         int n=arr.size(),ans;

//         for(int i=0;i<n-1;i++)
//         {
//             if(arr[i]==arr[i+1])
//                 ans=arr[i];
//         }
//         return ans;
        
        int n=arr.size();
        int freq[n+1],ans;
        for(int i=0;i<=n;i++)
            freq[i]=0;
        
        for(int i=0;i<n;i++)
        {
            if(freq[arr[i]] == 0)
                freq[arr[i]]++;
            else
                ans=arr[i];
        }
        return ans;
    }
};