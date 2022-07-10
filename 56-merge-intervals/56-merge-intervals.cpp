class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        vector<vector<int>> ans;
        if(intervals.size()==0)
            return ans;
        
        sort(intervals.begin(),intervals.end());
        
        //(1 3) (2 6) (8 10) (9 9) (15 18)
        vector<int> tempInt=intervals[0]; //(1 3)
        
        for(auto it:intervals) //it goes to 1 3, then 2 6...
        {
            if(it[0]<=tempInt[1])//it[0] means intervals ke 0 ka 0, tempInt ka 1 means intervals[0][1] i.e. 3
                tempInt[1]=max(tempInt[1],it[1]);
            
            else
            {
                ans.push_back(tempInt);
                tempInt=it;
            }
        }
        
        ans.push_back(tempInt);
        return ans;
    }
        
};

//merge tab krte ha jab phle vale ka bad vala is more then doosre vale ka phle vala

//phel sort krlo so that we are sure ki vahi merge honge jo sath sath ha, say strng ke 3 intrvls merge heu toh say they are result1 and ab 4th pair kyuki usme merge nahi ho parha ha toh ye merged ans ko ek alag final vector me store krlo and ab 4th ke aage pairng kroo hab tak possble ha
//thus nlogn for sorting and n for traversing complexity hi lagi isme

//logic for merge: kyuki sorted ha thus left bound toh iska hi but right bound max out of both