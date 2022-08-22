class Solution {
    private: 
    void solve(string &digits, int index, vector<string> &final_ans, unordered_map<char,string> mp, string temp)
    {
        if(digits.size() == index)
        {
            final_ans.push_back(temp);
            return;
        }
        
        char b = digits[index];
        for(int i=0;i<mp[b].size();i++)
        {
            temp.push_back(mp[b][i]);
            solve(digits,index+1,final_ans,mp,temp);
            temp.pop_back();
        }
    }
    
    public:
    vector<string> letterCombinations (string digits) 
    {
        unordered_map<char,string> us;
        us['2']="abc";
        us['3']="def";
        us['4']="ghi";
        us['5']="jkl";
        us['6']="mno";
        us['7']="pqrs";
        us['8']="tuv";
        us['9']="wxyz";
        vector<string> final_ans;
        
        if(digits.empty())
            return final_ans;
        
        solve(digits, 0, final_ans, us, "");
        return final_ans;
    }      
}; 