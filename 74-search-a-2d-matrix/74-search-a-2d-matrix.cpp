class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int n=matrix.size(),m=matrix[0].size();
        int i=0,j=m-1;
        while(i<n && j>=0)
        {
            if(matrix[i][j]==target)
                return true;
            else
            {
                if(matrix[i][j]>target)
                    j--;
                else
                    i++;
            }
        }
        return false;
    }
};

//brute force: find in entire matrx, going one by one
//better: har row me indvdually bianry search so N rows having M clumn each thus logM bbianry N times
//thus N*logM

//optimal approach: 
//ques me inout aisa ha by default ki rows and col both are sorted, har cell me, jo bhi elemnt uss cell ke left pr ha voh usse chote ha and jo bhi lement cell ke neeche ha, voh usse bade ha