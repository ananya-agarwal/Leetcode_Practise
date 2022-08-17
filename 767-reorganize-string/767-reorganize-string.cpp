class Solution {
public:
    string reorganizeString(string s) 
    {
        priority_queue<pair<int, char>> pq;
        unordered_map<char, int> ump;
        
        for(int i = 0; i < s.length(); ++i)
            ump[s[i]]++;
        
        for(auto it = ump.begin(); it != ump.end(); ++it)
            pq.push({it->second, it->first});
        
        string str = "";
        
        while(pq.size() > 1)
        {
            auto top1 = pq.top();
            pq.pop();
            auto top2 = pq.top();
            pq.pop();
            str += top1.second;
            str += top2.second;
            top1.first--;
            top2.first--;
            if(top1.first >= 1) pq.push(top1);
            if(top2.first >= 1) pq.push(top2);
        }
        
        if(!pq.empty())
        {
            if(pq.top().first >= 2) return "";
            else str += pq.top().second;
        }
        return str;
    }
};