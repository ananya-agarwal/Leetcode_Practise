class Solution {
public:
    int findDuplicate(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        int n=arr.size(),ans;

        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
                ans=arr[i];
        }
        return ans;
    }
};