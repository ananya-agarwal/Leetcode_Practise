class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int i=0,j=0,k=0,n=nums1.size(), m=nums2.size();
        vector<int> nums3(n+m);
        
        while(i<n && j<m)
        {
            if(nums1[i]<nums2[j])
            {
                nums3[k++]=nums1[i++];
            }
            else
                nums3[k++]=nums2[j++];
        }
        
        if(i<n)
            while(i<n)
                nums3[k++]=nums1[i++];
        
        if(j<m)
            while(j<m)
                nums3[k++]=nums2[j++];
        
            n = n+m;
    if(n%2==1) 
        return nums3[((n+1)/2)-1];
    else return ((float)nums3[(n/2)-1]+(float)nums3[(n/2)])/2;
    }
};