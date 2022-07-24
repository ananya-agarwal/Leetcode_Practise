class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map<int, int> m;
        for(int i : nums) 
            m[i]++;
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minh;
        for(auto i : m) 
        {
            minh.push({i.second, i.first});
            if(minh.size() > k) minh.pop();
        }
        
        vector<int> ans;
        while(!minh.empty())
        {
            ans.push_back(minh.top().second);
            minh.pop();
        }
        
        return ans;
    }
};