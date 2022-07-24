class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) 
    {
        // sort(nums.begin(), nums.end(), greater<int>());
        // return nums[k-1];
        
        priority_queue<int>pq ;
        int n = arr.size()  ;

        for (int i = 0; i < arr.size(); i++) 
            pq.push(arr[i])  ;
    
        int f = k - 1 ;

        while (f > 0)
        {
            pq.pop()  ;
            f-- ;
        }

        return pq.top();
    }
};


