class StockSpanner 
{
    
public:
    
    int i=0;
    stack<pair<int,int>> s;
    StockSpanner()
    {
        
    }
    
    int next(int price)
    {
        i++;
        while(!s.empty() && s.top().second<=price) s.pop();
        
        if(s.empty())
        {
            s.push({i,price});
            return i;
        }
        
        pair<int,int> temp=s.top();
        s.push({i,price});
        return i-temp.first;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */


