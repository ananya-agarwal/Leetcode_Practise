class Solution {
public:

    
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) 
    {
        
        // nums1.resize(m); //remove the trailing 0s
        // //since length of the vector includes 0 as well which is not a part of #elements
        // nums2.resize(n);
        // nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        // sort(nums1.begin(),nums1.end());
        
        nums1.resize(n);
        nums2.resize(m);
        
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(nums1[i] <= nums2[j])
            {
                i++;
            }
            
            else
            {
                swap(nums1[i], nums2[j]);
                i++;
                j++;
            }
        }
        
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
    }
};