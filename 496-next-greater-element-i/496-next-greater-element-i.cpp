class Solution
{
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        int n=nums1.size(), m=nums2.size();
        vector<int> res;
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                bool f=true;
                if(nums1[i] == nums2[j])
                {
                    for(int k=j+1;k<m;k++)
                    {
                        if(nums2[k]> nums2[j])
                        {
                            res.push_back(nums2[k]);
                            f=false;
                            break;
                        }
                    }
                    if(f)
                        res.push_back(-1);
                }
            }
        }
        
        return res;
    }
};